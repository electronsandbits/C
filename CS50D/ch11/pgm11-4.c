/*
 * File:pgm11-4.c 
 * --------------
 * In this program  each element in the nums array is retrieved by
 * successively incrementing the address in nPtr.
 */

#include <stdio.h>

/*Constants */

#define NUMELS 7

/* Main Program */

int main() {
   int nums[NUMELS] = {60, 84, 72, 48, 108, 120, 144};
   int i, total = 0, *nPtr;

   nPtr = nums; /* Store address of nums[0] in nPtr */
   for (i = 0; i < NUMELS; i++ ) {
      total = total + *nPtr++;
   }
   printf("The total of the array elements is %d\n", total);

   return 0;
}

