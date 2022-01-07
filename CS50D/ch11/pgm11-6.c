/*
 * File:pgm11-6.c 
 * --------------
 * This program illustrates how an array is passed to a function.
 * This version uses array subscript.
 */

#include <stdio.h>


/* Function prototype */

int findMAx (int [], int);


/* Constants */

#define NUMELS 7


/* Main program */

int main() {
   int nums[NUMELS] = {60, 12, 48, 120, 144, 24, 40};
   printf("The maximun value is %d\n", findMax(nums, NUMELS));

   return 0;
}

/*
 * function:findMax
 * Usage: int findMax = vals(i);
 * -----------------------------
 * Returns the maximun value.
 */

int findMax(int vals[], int numEls) {
   int i, max = vals[0];

   for (i = 1; i < numEls; i++) {
      if ( max < vals[i])
        max = vals[i];
   }
   return(max);

}
