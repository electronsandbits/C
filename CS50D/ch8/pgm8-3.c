/*
 * File: pgm8-3.c
 * --------------
 * This program illustrates the initialization of array elements 
 * and then uses a for loop to locate the maximum value 
 * stored in the array.
 */

#include <stdio.h>

/* Constants */

#define ARRAY 7

/* Main program */

int main() {
   int nums[ARRAY] = {12, 48, 144, 72, 96, 120, 24}; /* Array init.*/
   int i, max, min;
  
   max = nums[0];                 /* set maximun to zero */
   for (i = 1; i < ARRAY; i++) {
      if (max < nums[i]) {        /* locate the maximun */
        max = nums[i];
      }
   } 
   printf("The maximum value is %d\n", max);
   return 0;
}
