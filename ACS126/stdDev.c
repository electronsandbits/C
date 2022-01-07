/* 
 * File: stdDev.c 
 * --------------
 * This program computes the mean and the standard deviation
 * from a set of data values from measurement collected 
 * in a scientific experriment.
 */

#include <stdio.h>
#include <math.h>


/* Function prototypes */

float funcMean(float[], int);
float funcstdDev(float[],int);


/* Constants */

#define ARSIZE 10

/* Main program */

int main() {
   int i;
   float expData[ARSIZE], mean, stDev;

   printf("Input ten data elements\n");
   for (i = 0; i < ARSIZE; i++) {
      scanf("%f", expData[i]);
   }
}
