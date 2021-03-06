/*
 * File: pgm8-5.c
 * ---------------
 * This program is a more general form of findMax() 
 * which can be used to find the maximum value of an 
 * integer array of arbitrary size.
 */


#include <stdio.h>


/* Constants */

#define MAXELS 5


/* Function prototypes */

int findMax(int [], int);


/* Main program */

int main() {
  int nums[MAXELS] = {108, 7, 14, 60, 144};

   printf("The maximum value is %d\n", findMax(nums, MAXELS)); /* Function's call */
 
   return 0;
}

/* 
 * Function:findMax
 * Usage:int val [MAXELS];
 * -----------------------
 * Returns the maximum value.
 */

int findMax(int vals[], int numels) {
   int i, max = vals[0];

   for (i = 1; i < numels; i++) {
      if (max < vals[i]) {
        max = vals[i];
      }
   }
   return (max);
}




