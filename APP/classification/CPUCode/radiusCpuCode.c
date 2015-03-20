#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Maxfiles.h"
#include "MaxSLiCInterface.h"











/*
 * Constants
 */

// Number of dimensions
#define N 4

// Number of classes
#define C 256

// Number of data points to be classified
#define P 4096



/*
 * Constant
 * --------
 * Defines the spatial implementation - Fundamentally, calculating
 * the euclidean distances between a given point and all the respective
 * classes is an embarrassingly parallel problem - in so far the calculation
 * for each point is completely independent of the calculation of any other
 * point. As a result, in a spatial implementation it makes sense to divide
 * the problem into independent sub-problems and instantiate multiple
 * realizations of the function that calculates euclidean distance. This
 * way, we can harness the bandwidth of the memory bank and hopefully
 * speed-up the program.
 */

// Number of mapped ROMs in the DFE
#define R 128













/*
 * Function: radiusCPU
 * ------------------
 *
 * Calculates whether a given point belongs to each of the given classes.
 * A class is an n-sphere and a point belongs to a class if it lies within its radius.
 * In order to check whether a point lies within the radius of the class, we calculate
 * the Euclidean distance between the point and the centre of the class. The point
 * would lie within the class if this distance is less than the radius of the class.
 *
 * Arguments
 * ---------
 *
 * class_centres: Centre points of all the classes
 * class_radii2: Square radii of all the classes
 * data: Data points to be classified
 * datai: Index for the given data point
 *
 * Returns
 * -------
 *
 * dist2: Square euclidean distances of given data point with all the class_centres
 * result: Belong-ness relation between the given data point and all the classes
 */

void radiusCPU(float *class_centres, float *class_radii2, float *data, float *dist2, float *result) {
    // For each class, calculate the square euclidean distance between its centre and the given point
	for(int j = 0 ; j < C; j++) {
        // For each dimension, calculate the euclidean term and accumulate
		for(int i = 0 ; i < N; i++)
			 dist2[j] = pow(class_centres[i + N*j] - data[i], 2) + dist2[j];
		// If euclidean distance is smaller than the class radius, the data point belongs to the class
		result[j] = (dist2[j] < class_radii2[j])? j : -1;
	}
}







int main(void)
{

	/*
	 * CPU Code
	 * --------
	 *
	 * Only the CPU stuff goes here!
	 */

	// Seed the random number with time
	srand(time(NULL));

	// Variables for recording run times etc.
	double clock_t,start_t1,start_t2,end_t1,end_t2,total_t1,total_t2;

	int sizeBytes =  sizeof(float);

	// The input data points that are to be classified
	float *data = malloc(P*N*sizeBytes);

	/*
	 * Important
	 * ---------
	 *
	 * Classes are n-spheres. They have a centre point - comprising N floats for an
	 * N-dimension problem space and radius-squared which is also a float. We store
	 * radius squared instead of radius because we only need to compare to the square
	 * of euclidean distance so we save ourselves from having to calculate the square
	 * root of at least 2 numbers in every iteration.
	 *
	 */

	// The centre point of the classes
	float *classes = malloc(N*C*sizeBytes);

	// The squared-radius of the classes
	float *radii2 = malloc(C*sizeBytes);

	// Output of the CPU code - Please see the docs for radiusCPU function for more.
	float *out = malloc(P*C*sizeBytes);

	// Output of the DFE
	float *expected = malloc(P*C*sizeBytes);

	// Some memory for the euclidean distances
	// TODO: I do not know why we are storing this?
	float *z = malloc(P*C*sizeBytes);

	// Generate random input data
	for(int i = 0; i < N*P; i++)
		data[i] = random() % 100;

	// Generate random class centres
	for(int i = 0; i < C*N; i++)
		classes[i] = random() % 100;

   // And finally, random class squared-radii
	for(int i = 0; i < C; i++) {
		radii2[i] = random() % 100;
		radii2[i] = radii2[i] * radii2[i];
	}

	// Initialize CPU output and Euclidean distances
	for(int i = 0 ; i < C*P; i++) {
		z[i] = 0;
		out[i] = 0;
	}

	printf("Running on CPU.\n");
    start_t1 = clock();
    printf("Starting CPU program, start_t1 = %.3lf\n", start_t1);

	// Call radiusCPU for each data point
	for(int i = 0 ; i < P ; i++)
		radiusCPU(classes, radii2, &data[N*i], &z[C*i], &out[C*i]);

	end_t1 = clock();
	printf("End of CPU program, end_t1 = %.3lf\n", end_t1);
	total_t1 = (double)(end_t1 - start_t1)/ CLOCKS_PER_SEC;



    /*
     * DFE Code
     * --------
     *
     * Only DFE specific stuff goes here!
     *
     * The central idea of the DFE implementation is to load up the Class centres as well as radii on the FMEMs.
     * In order to maximise the bandwidth for accessing the FMEMs, we are going to use multiple banks and interleave
     * the data. We can do this here because the problem is embarrassingly parallel - evident from the fact that
     * each invocation of the radiusCPU function is completely independent from the other.
     *
     */

	// Here, we arrange the class-centres in banks of FMEMs
	// Why are we using a double here?
   	double** c = malloc (R* sizeof(double*));

   	//Declare individual FMems consisting of 3128 floats each for data matrix
   	for(int i = 0 ; i < R ; i++){
   		c[i] = malloc((C*N/R)*sizeBytes*2); //for size of double
   	}

    // Initialise FMEMs such that first and second class-centres are placed in the first FMem, third and
	// fourth elements b are placed in second FMem, fifth and sixth elements place in third FMem, etc.
   	// I do not know the rationale for this arrangement, especially since it complicates the code below as well as
   	// the one in the Kernel where we try to decode the addresses.
	for(int i = 0 ; i < (C*N)/(R*2) ; i++)
		for(int r = 0 ; r < R ; r++)
			for(int j = 0 ; j < 2 ; j ++)
				c[r][i*2 + j] = classes[j + 2*r + 2*R*i];

   	// Similarly, here, we arrange the class-radii in banks of FMEMs.
	double** g = malloc (32* sizeof(double*));

   	//Declare individual FMems consisting of P*N/R floats each for radii
   	for(int i = 0 ; i < R/4 ; i++)
		g[i] = malloc((C*N/R)*sizeBytes*2);

	// Fill it up with interleaved data
	for( int i = 0 ; i < (C*N)/(R*2) ; i++)
		for(int r = 0 ; r < R/4 ; r++)
			for(int j = 0 ; j < 2 ; j++)
				g[r][i*2 + j] = radii2[j + 2*r + 2*(R/4)*i];

	//declare struct consisting of all elements to be passed to the DFE
	max_file_t * mf = radius_init();
	max_engine_t * me = max_load(mf,"*");
	radius_actions_t actions;
	actions.param_P = P;
	actions.param_N = N;
	actions.param_C = C;
	actions.param_R = R;
	actions.instream_a = data;
	actions.outstream_c = expected;

	//assign pointers to corresponding mappedRoms
	double ** ptr = (double**)&(actions.inmem_radiusKernel_mappedRom000);
	for(int i = 0 ; i< R ; i++, ptr++) *ptr = c[i];

	double ** ptr2 = (double**)&(actions.inmem_radiusKernel_mappedRom128);
	for(int i = 0 ; i< R/4 ; i++, ptr2++) *ptr2 = g[i];

	printf("Running on DFE.\n");
	start_t2 = clock();
	printf("Starting DFE, start_t2 = %.3lf\n", start_t2);
	radius_run(me, &actions);
	end_t2 = clock();
	printf("End of DFE program, end_t2 = %.3lf\n", end_t2);
	total_t2 = (double)(end_t2 - start_t2)/ CLOCKS_PER_SEC;
	printf("Total time taken by CPU: %.3lf, total time take by DFE: %.3lf\n",total_t1,total_t2);

	// Check CPU code output against DFE output
	for(int i = 0; i < P*C; ++i) {
		if (out[i] != expected[i]) {
			printf("%d %.3lf %.3lf\n", i, out[i], expected[i]);
			return 1;
		}
	}
	printf("Done.\n");
	max_unload(me);
	return 0;
}
