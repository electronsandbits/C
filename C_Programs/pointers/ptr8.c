/*
 * File:ptr8.c
 * ------------
 * This program uses pointers, instead of of subscript to
 * access array elements.
 */

#include <stdio.h>

/* Constants */

#define BIBLE 12


/* Main program */

int main() {
   int nums[BIBLE] = {450, 133, 1260, 1290, 1335, 75, 45,  70, 40, 42, 24, 44};
   int total = 0, *nPtr;

   nPtr = nums; /* Store address of nums[0] in nPtr */

   while (nPtr < nums + BIBLE) { 
      total += *nPtr++;
   }
   printf(" The total of the array elements is %d\n", total);

   return 0;
}


