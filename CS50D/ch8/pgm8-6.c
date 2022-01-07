/*
 * File: pgm8-6.c 
 * --------------
 * This program  uses two statistical functions 
 * to determine the average and standard deviation
 * of an array of numbers.
 */

#include <stdio.h>
#include <math.h>

/* Constants */

#define NUMELS 10

/* Function prototypes */

double findAvg(int [], int); 
double stdDev(int[], int, double);


/* Main program */

int main() {
   int values[NUMELS] = {98, 82, 67, 54, 78, 83, 95, 76, 68, 63};
   double average, stddev;


   average = findAvg(values, NUMELS); /* Function's call */
   stddev  = stdDev(values, NUMELS, average); /* Function's call */


   printf("The average of the numbers is %5.3f\n", average);
   printf("The standard deviation of the numbers is %5.2f\n",stddev);


   return 0;
}

/*
 * Function: findAvg
 * Usage: average = findAvg[int [], int numel];
 * --------------------------------------------
 * Returns the average of a list of integer numbers.
 */

double findAvg(int nums[], int numel) {
   int i;
   double sumnums = 0.0; 
  
   for (i = 0; i < numel; i ++) { /* calculate the sum  of the grades */
      sumnums = sumnums + nums[i];
   }
   return (sumnums / numel); /* Calculate and return the average */
}
 
/*
 * Function: stdDev
 * Usange: stddev = stdDev(int nums[], int numel, double av);
 * ----------------------------------------------------------
 * Returns the standard deviation.
 */

double stdDev(int nums[], int numel, double av) {
   int i;
   double sumdevs = 0.0;
 
   for (i = 0; i < numel; i++) {
     sumdevs = sumdevs + pow((nums[i]  - av),2);
   }
   return (sqrt(sumdevs / numel));

}
