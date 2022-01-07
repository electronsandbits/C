/* 
 * File: pgm8-5.c 
 * --------------
 */
 
#include <stdio.h>
#define MAXELS 5

/* Function prototypes */

int findMax(int [], int); 

/* Main Program */

int main() {
   int nums[MAXELS] = {2, 18, 1, 27, 16};

   printf("The maximum value is %d\n", findMax(nums, MAXELS));

   return 0;
}

/* 
 * Function: findMax
 * -----------------
 */

int findMax(int vals[], int numels) {
  int i, max = vals[0];
  for (i = 1; i < numels; i++) {
     if (max < vals[i])
       max = vals[i];
  
  return (max);
  }
}
