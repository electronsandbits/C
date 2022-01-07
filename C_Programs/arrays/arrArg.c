/*
 * File:arrArg.c
 * -------------
 * This program illustrates arrays as function arguments.
 */

#include <stdio.h>

/* Constants */
 
#define MAXELS 7

/* Function prototypes */

void findMax(int [MAXELS]);

/* Main program */

int main() {
   int nums[MAXELS] = {22, 18, 42, 40, 21, 24, 14};
   
   findMax(nums); /* Function's call */

   return 0;
}

/* 
 * Function: findmax()
 * Usage: findMax(int vals);
 * -------------------------
 * Returns the maximum value.
 */

// void findMax (int vals[]);
void findMax(int vals[MAXELS]) {
   int i, max = vals[0];

   for (i = 1; i < MAXELS; i++) {
      if (max < vals[i]) {
        max = vals[i];
      }
   }

   printf("The maximum value is %d\n", max);
}
