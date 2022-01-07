/* 
 * File: pgm8-6.c 
 * --------------
 * This program illustrates two statistical functions to determine the average
 * and standard deviation of an array of numbers.
 * The first function is to determine the average and the second function
 * is to determine the standard deviation of a list of integer numbers.
 * Each function should  be able to accept the numbers as array and return their
 * calculated values to the calling function.
 */

#include <stdio.h>
#include <math.h>
#define NUMELS 10

/* function prototype */

double findAvg(int [], int);         
double stdDev(int [], int, double);  


/* Main  program */

int main() {
   int values[NUMELS] = {98, 82, 67, 54, 78, 83, 95, 76, 68, 63};
   double average, stddev;
 
   average = findAvg(values, NUMELS); /* call the function */
   stddev = stdDev(values, NUMELS, average); /* call the function */

   printf("The average of the numbers is %5.2f\n", average);
   printf("The standard deviation of the numbers is %5.2f\n", stddev);

   return 0;
}

/* 
 * Function:findAvg
 * ----------------
 * Returns  the average  of a  list of integers numbers.
 */

double findAvg(int nums[], int numel) {
   int i;
   double sumNums = 0.0;

   for (i = 0; i < numel; i++)  /* calculate the sum of the grades */
      sumNums = sumNums + nums[i];

   return (sumNums / numel);    /* calculate and return the average */
}

/* 
 * Function:stdDev
 * ---------------
 * Returns  the standard deviation  of a  list of integers numbers.
 */

double stdDev(int nums[], int numel, double av) {
   int i;
   double sumDevs = 0.0;

   for (i = 0; i < numel; i++)
      sumDevs = sumDevs + pow((nums[i] - av), 2);

   return(sqrt(sumDevs/numel));
}
