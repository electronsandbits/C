/*
 * File:iniArr.c
 * -------------
 * This program illustrates the initialization of array elements  
 * within the declaration of the array and then uses a for loop
 * to locate the maximum value stored in the array.
 */

#include <stdio.h>

/* Constants */

#define  ARRAY 7

/* Main program */

int main() {
   int nums[ARRAY] = {42, 24, 14, 40, 44, 144, 21};
   int i, max;

   max = nums[0]; /* set maximum to zero */

   for (i = 1; i < ARRAY; i++)  {
      if (max < nums[i]) {
        max = nums[i]; 
      } 
   }

   printf("The maximum value is %d\n", max);

   return 0;
}

