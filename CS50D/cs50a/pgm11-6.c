/* 
 * File: pgm11-6.c
 * ---------------
 */

#include <stdio.h>


/* Constants */

#define NUMELS 5


/* Function prototypes */

int findMax(int[], int); 

int main() {
   int nums[NUMELS] = {2, 18, 1, 27, 16};

   printf("The maximum value is %d\n", findMax(nums,NUMELS));

   return 0;
}

/* 
 * Function: findmax
 * Usage:int findMAx ()
 * -------------------
 *
 */

int findMax(int vals[], int numEls) { /* find the maximum value */

  int i, max = vals[0];
  for (i = 1; i < numEls; i++)
     if (max < vals[i])
       max = vals[i];

   return (max);
}
