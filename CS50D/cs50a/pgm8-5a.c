/* 
 * File: pgm8-5a.c 
 * --------------
 * This program locate the minimun value of the passed array.
 */
 
#include <stdio.h>
#define MINELS 5

/* function prototypes */

int findMin(int [], int); 

/* Main Program */

int main() {
   int nums[MINELS] = {12, 24, 36,48, 60};
   printf("The minimum value is %d\n", findMin(nums, MINELS));
   return 0;
}

/* 
 * Function: findMin
 * -----------------
 */

int findMin(int vals[], int numels) {
  int i, min = vals[0];
  for (i = 1; i < numels; i++)
    if (min < vals[i])
     min = vals[i];

  return (min);
}
