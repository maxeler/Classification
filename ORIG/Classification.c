#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
 * Constants
 */

// Number of dimensions
#define N 2
// Number of classes
#define C 2
// Number of data points to be classified
#define P 4



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

    // Seed the random number with time
    srand(time(NULL));

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

    // Some memory for the euclidean distances
    // TODO: This can be not-stored
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

    // Call radiusCPU for each data point
    for(int i = 0; i < P; i++)
        radiusCPU(classes, radii2, &data[N*i], &z[C*i], &out[C*i]);

    // Print the output
    for(int i = 0; i < P; i++) {
        for(int j = 0; j < C; j++) {
            printf("%d", (int) out[C*i + j]);
            if(j < (C-1)) printf(", ");
        }
        printf("\n");
    }

    return 0;
}

