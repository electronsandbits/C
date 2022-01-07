/*
 * File:ptr6.c
 * -----------
 * This program sums the elements in num array by successively 
 * incrementing the address in nPtr.
 */

#include <stdio.h>

/* Constants */

#define NUMELS 14

/* Main program */

int main() {
   int nums[NUMELS]  = { 133, 22, 13, 44, 450, 75, 45, 18,
	                42, 70, 40, 24, 7, 144};  
   int i, total = 0, *nPtr;

   nPtr = nums; /* store the address of nums[0] in nPtr */

   for (i = 0; i < NUMELS; i++)  {
      total = total + *nPtr++;
   }
   printf("The total of the array elements is %d\n", total);

   return 0;

}
