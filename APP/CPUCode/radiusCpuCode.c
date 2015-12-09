/**
 Copyright (c) 2015, Maxeler Technologies
 All rights reserved.
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Maxfiles.h"
#include "MaxSLiCInterface.h"

/**
 * Constants as defined in the Radius Engine Parameters.
 */
static const int DIM			= radius_DIM;		// Nr of dimensions.
static const int CLASSES		= radius_CLASSES;	// Nr of classes.
static const int POINTS			= radius_POINTS;	// Nr of data points.
static const int ROMS			= radius_ROMS; 		// Nr of ROMs.
static const int SIZE_FLOAT 	= sizeof(float);	// Size of float.
static const int SIZE_DOUBLE 	= sizeof(double);	// Size of double.

/**
 * \brief Frees 1D-dimensional arrays.
 *
 * \param array 1D array to free.
 */
void free1D(void *array) {
	free(array);
}

/**
 * \brief Frees 2D-dimensional arrays.
 *
 * \param array 2D array to free.
 */
void free2D(void **array, int n) {
	for(int i = 0; i < n; i++) {
		free(array[i]);
	}
	free(array);
}

/**
 * \brief Calculates whether a given point belongs to each of the given classes.
 *
 * A class is an n-sphere and a point belongs to a class if it lies within its
 * radius. In order to check whether a point lies within the radius of the
 * class, we calculate the Euclidean distance between the point and the centre
 * of the class. The point would lie within the class if this distance is less
 * than the radius of the class.
 *
 * \param class_centres centre points of all the classes.
 * \param class_radii2 	Square radii of all the classes.
 * \param data 	 		data points to be classified.
 * \param result 		relationship between data point and all the classes.
 */
void radiusCPU(
		const float const *class_centres,
		const float const *class_radii2,
		const float const *data,
		float *result) {
    // For each class, calculate the square euclidean distance between its
	// centre and the given point.
    for(int j = 0; j < CLASSES; j++) {
        // For each dimension, calculate the euclidean term and accumulate
    	float dist2 = 0.0;
    	// Store dist2 in an array if you want to keep the square euclidean
    	// distances of given data point with all the class_centres.
    	for(int i = 0 ; i < DIM; i++) {
    		dist2 = pow(class_centres[i + DIM*j] - data[i], 2) + dist2;
    	}
    	// If Euclidean distance is smaller than the class radius, the data
    	// point belongs to the class.
    	result[j] = (dist2 < class_radii2[j])? j : -1;
    }
}

int main(void) {
	/**
	 * CPU Code
	 *
	 * Classes are n-spheres. They have a centre point - comprising N floats
	 * for an N-dimension problem space and radius-squared which is also a
	 * float. We store radius squared instead of radius because we only need to
	 * compare to the square of Euclidean distance so we save ourselves from
	 * having to calculate the square root of at least 2 numbers in every
	 * iteration.
	 *
	 */

	// The centre point of the classes.
	float *classes = malloc(DIM*CLASSES*SIZE_FLOAT);

	// The input data points that are to be classified.
	float *data = malloc(POINTS*DIM*SIZE_FLOAT);

	// The squared-radius of the classes.
	float *radii2 = malloc(CLASSES*SIZE_FLOAT);

	// Output of the CPU code.
	float *out = malloc(POINTS*CLASSES*SIZE_FLOAT);

	// Output of the DFE
	float *expected = malloc(POINTS*CLASSES*SIZE_FLOAT);

	// Generate random input data
	for(int i = 0; i < DIM*POINTS; i++)
		data[i] = random() % 100;

	// Generate random class centres
	for(int i = 0; i < CLASSES*DIM; i++)
		classes[i] = random() % 100;

   // And finally, random class squared-radii
	for(int i = 0; i < CLASSES; i++) {
		radii2[i] = random() % 100;
		radii2[i] = radii2[i] * radii2[i];
	}

	// Initialize CPU output and Euclidean distances
	for(int i = 0 ; i < CLASSES*POINTS; i++) {
		out[i] = 0;
	}

	printf("Running on CPU.\n");
	srand(time(NULL));
	double start_t1,start_t2,end_t1,end_t2,total_t1,total_t2;
    start_t1 = clock();
    printf("Starting CPU program, start_t1 = %.3lf\n", start_t1);

	for(int i = 0; i < POINTS; i++) {
		radiusCPU(classes, radii2, &data[DIM*i], &out[CLASSES*i]);
	}

	end_t1 = clock();
	printf("End of CPU program, end_t1 = %.3lf\n", end_t1);
	total_t1 = (double)(end_t1 - start_t1)/ CLOCKS_PER_SEC;

	/**
	 * DFE Code
	 *
	 * The central idea of the DFE implementation is to load up the Class
	 * centres as well as radii on the FMEMs. In order to maximise the
	 * bandwidth for accessing the FMEMs, we are going to use multiple banks
	 * and interleave the data. We can do this here because the problem is
	 * embarrassingly parallel - evident from the fact that each invocation
	 * of the radiusCPU function is completely independent from the other.
	 * As a result, in a spatial implementation it makes sense to
	 * divide the problem into independent sub-problems and instantiate multiple
	 * realizations of the function that calculates Euclidean distance. This
	 * way, we can harness the bandwidth of the memory bank and hopefully
	 * speed-up the program.
	 */

	// Here, we arrange the class-centres in banks of FMEMs.
	// We use doubles because ROM tables can be initialised with contents
	// specified either as an array of doubles or using Bits (cf. Multiscale
	// Dataflow Programming Tutorial section 12.2).
   	double** c = malloc (ROMS * sizeof(double*));

   	// Declare individual FMems consisting of CLASSES*DIM/ROMS floats each for
   	// data matrix.
   	for(int i = 0; i < ROMS; i++) {
   		c[i] = malloc((CLASSES*DIM/ROMS)*SIZE_DOUBLE);
   	}

    // Initialise FMEMs such that first and second class-centres are placed in
   	// the first FMem, third and fourth elements b are placed in second FMem,
   	// fifth and sixth elements place in third FMem, etc. I do not know the
   	// rationale for this arrangement, especially since it complicates the code
   	// below as well as the one in the Kernel where we try to decode the
   	// addresses.
	for(int i = 0; i < (CLASSES*DIM)/(ROMS*2); i++) {
		for(int r = 0; r < ROMS; r++) {
			for(int j = 0; j < 2; j ++) {
				c[r][i*2 + j] = classes[j + 2*r + 2*ROMS*i];
			}
		}
	}

   	// Similarly, here, we arrange the class-radii in banks of FMEMs.
	// The rationale for this arrangement is unknown as well.
	// In any case, the number of rows in the ROM is dependent on the number
	// of ROMs specified in ROMS. The width is dependent of the number of
	// classes, the dimension and the number of roms.
	// You may have to change this arrangement if you start using *large* data
	// sets (and don't forget to make changes in the kernel accordingly).
	double** g = malloc (ROMS/4 * sizeof(double*));

   	//Declare individual FMems consisting of C*D/R floats each for radii.
   	for(int i = 0; i < ROMS/4; i++) {
		g[i] = malloc((CLASSES*DIM/ROMS)*SIZE_DOUBLE);
   	}

	// Fill it up with interleaved data.
	for( int i = 0; i < (CLASSES*DIM)/(ROMS*2); i++) {
		for(int r = 0; r < ROMS/4; r++) {
			for(int j = 0; j < 2; j++) {
				g[r][i*2 + j] = radii2[j + 2*r + 2*(ROMS/4)*i];
			}
		}
	}

	// Configure relevant parameters of the kernel.
	max_file_t * mf = radius_init();
	max_engine_t * me = max_load(mf,"*");
	radius_actions_t actions;
	actions.instream_input = data;
	actions.outstream_output = expected;

	// In the following classes and radii are mapped to ROMs.
	double ** ptr = (double**)&(actions.inmem_radiusKernel_mappedRom000);
	for(int i = 0; i < ROMS; i++, ptr++) {
		*ptr = c[i];
	}

	ptr = (double**)&(actions.inmem_radiusKernel_mappedRom128);
	for(int i = 0; i < ROMS/4; i++, ptr++) {
		*ptr = g[i];
	}

	printf("Running on DFE.\n");
	start_t2 = clock();
	printf("Starting DFE, start_t2 = %.3lf\n", start_t2);
	radius_run(me, &actions);
	end_t2 = clock();
	printf("End of DFE program, end_t2 = %.3lf\n", end_t2);
	total_t2 = (double)(end_t2 - start_t2)/ CLOCKS_PER_SEC;
	printf("Total time taken by CPU: %.3lf, total time take by DFE: %.3lf\n",
			total_t1,total_t2);

	// Check CPU code output against DFE output
	for(int i = 0; i < POINTS*CLASSES; i++) {
		if (out[i] != expected[i]) {
			printf("%d %.3lf %.3lf\n", i, out[i], expected[i]);
			return 1;
		}
	}
	printf("Done.\n");
	max_unload(me);

	// Clean up...
	free1D(classes);
	free1D(data);
	free1D(radii2);
	free1D(out);
	free2D((void **)c, ROMS);
	free2D((void **)g, ROMS/4);

	return 0;
}
