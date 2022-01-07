/*
 * File: swap.c 
 * ------------
 * This program illustrates call by reference. 
 */

#include <stdio.h>


/* Function prototypes */

void swap (int *x, int *y);


/* Main program */

int main() {
   int i, j;
   i = 10;
   j = 20;

   printf("i and j before swapping: %d %d\n", i, j);
   swap(&i, &j);     /* pass the addresses of i and j */
   printf("i and j after swapping: %d %d\n", i, j);

   return 0;
}

/*
 * Function:swap
 * Usage: swap (int x, int y);
 * ---------------------------
 * Exchange  the values of two variables.
 */

void swap (int *x, int *y) {
   int temp;
   temp  = *x;  /* save the value at address x */
   *x = *y;     /* Put y into x */
   *y = temp;   /* put x into y */
}
