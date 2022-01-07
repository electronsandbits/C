/*
 * File: prog1.c
 * -------------
 * This program  locate the minimum value of
 * passed  array.
 */

#include <stdio.h>

/* Constants */

#define MAXELS 7

/* Function prototypes */

int findMin(int [], int);


/* Main program */

int main() {
  int nums[MAXELS] = {108, 7, 48, 60, 144, 14, 36};

   printf("The minimum value is %d\n", findMin(nums, MAXELS)); /* Function's call */
 
   return 0;
}

/* 
 * Function:findMin
 * Usage:int val [MAXELS];
 * -----------------------
 * Returns the minimum value.
 */

int findMin(int vals[], int numels) {
   int i, min = vals[0];

   for (i = 1; i < numels; i++) {
      if (min > vals[i]) {
        min = vals[i];
      }
   }
   return (min);
}
