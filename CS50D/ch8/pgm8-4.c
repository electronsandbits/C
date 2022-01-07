/*
 * File: pgm8-4.c
 * ---------------
 * This program uses arrays as functions arguments
 * to return the maximum value of a given array.
 */


#include <stdio.h>


/* Constants */

#define MAXELS 9


/* Function prototypes */

void findMax(int [MAXELS]);


/* Main program */

int main() {
   int nums[MAXELS] = {12, 108, 60, 48, 36, 24, 84, 96, 72};

   findMax(nums);    /* Function's call */
 
   return 0;
}

/* 
 * Function:findMax
 * Usage:int val [MAXELS];
 * -----------------------
 * Returns the maximum value.
 */

void findMax(int vals[]) {
   int i, max = vals[0];

   for (i = 1; i < MAXELS; i++) {
      if (max < vals[i]) {
        max = vals[i] ;
      }
   }
   printf("The maximum value is %d\n", max);
}
