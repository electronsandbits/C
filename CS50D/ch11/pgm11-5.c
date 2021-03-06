/*
 * File:pgm11-5.c 
 * --------------
 * In this program  each element in the nums array is retrieved by
 * successively incrementing the address in nPtr.
 */

#include <stdio.h>

/*Constants */

#define NUMELS 7


/* Main Program */

int main() {
   int nums[NUMELS] = {60, 48, 72, 108, -144, 120, 12};
   int total = 0, *nPtr;

   nPtr = nums; /* Store address of nums[0] in nPtr */
   While (nPtr < nums + NUMELS) {
      total +=  *nPtr++;
   }
   printf("The total of the array elements is %d\n", total);

   return 0;
}
