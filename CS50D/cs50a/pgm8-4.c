/*
 * File:pgm8-4.c 
 * -------------
 * This program illustrates the argument and parameter  declaration 
 * within arrays. 
 */

#include <stdio.h>
#define MAXELS 7

/* Function prototypes */

void findMax(int [MAXELS]); 

/* Main Program */

int main() {
   int nums[MAXELS] = {12, 24, 36, 48, 60, 72, 96};
   findMax(nums);  /* Function call */

   return 0;
}

/*
 * Function: findMAx
 * -----------------
 * Returns the maximun value in the list of five integers.
 */

void findMax(int vals[MAXELS]) {
   int i, max = vals[0];
   for (i = 1; i < MAXELS; i++)
      if (max < vals[i])
        max = vals[i];

  printf("The maximum value is %d\n", max);
}
