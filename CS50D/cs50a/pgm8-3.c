/* 
 * File:pgm8-3.c 
 * -------------
 * This program illustrates the initialization of array elements
 * within the declaration of the array  and then uses the for loop
 * to locate the maximun value stored in the array.
 */

#include <stdio.h>

/* Constants */

#define MAXELS 5

/* Main program */

int main() {
   int nums[MAXELS] = {7, 12, 60, 108, 48};
   int i, max;

   max = nums[0];
   for (i = 1; i < MAXELS; i++) {
      if (max < nums[i]) 
       max = nums[i];
   }
   printf("The maximum value is %d\n", max);
  
   return 0;
}
