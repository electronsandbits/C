/*
 * File: findMax.c
 * ---------------
 * This program finds the maximum value of an integer 
 * array of arbitrary  size.
 */

#include <stdio.h>

/* Function prototypes */

int findMax(int [], int);

/* Constants */
 
#define MAXELS 14

/* Main program */

int main() {
   int nums [MAXELS] = {13, 22, 18, 45, 21, 40, 24, 42, 7, 62, 70, 27, 16, 10};

   printf("The maximum value is %d\n", findMax(nums, MAXELS));

   return 0;
}

/*
 * Function: findMax()
 * Usage: findMax(vals, numels);
 * -----------------------------
 * The function expects the starting address
 * of an integer array and the number of elements
 * in the array as arguments. Then, using the number
 * of elements as the boundaries for its search, the
 * function's for loop causes each element to be examined
 * in sequential order to locate the maximum value.
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

