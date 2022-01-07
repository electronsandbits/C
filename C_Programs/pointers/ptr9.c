/*
 * File:ptr9.c
 * -----------
 * This program passess the nums array to the findMax function
 * using conventional array notation.
 */

#include <stdio.h>

/* Function prototype */

int findMax(int[], int );

/* Constants */

#define BIBLE 14

/* Main program */

int main()  {
   int nums[BIBLE]  = {450, 133, 1260, 1290, 1335, 75, 45, 70, 
	              40, 42, 24, 18, 13, 22};
   printf(" The maximum value is %d\n", findMax(nums, BIBLE));

   return 0;
}

/*
 * Function:findMax
 * Usage: findMax(int, int);
 * -------------------------
 *  Returns the maximum value in the array.
 */

int findMax(int *vals, int numEls) {
   int i, max = *vals;
   for (i = 1; i < numEls; i++)  {
      if (max < *(vals + i)) {
	max = * (vals + i);      
      }
   }
   return (max);
	 
}

