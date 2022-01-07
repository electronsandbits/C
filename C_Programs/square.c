/* 
 * File:square.c 
 * -------------
 * This program calculates the square of a given  number.
 */

#include <stdio.h>


/* Function prototypes */

int square (int n);


/* Main program */

int main (void) {

   double x ;

   printf("Enter x: ");
   scanf("%lf", &x);

   printf("Square: %d\n", square((int) x));

   return 0;
 
}

/* 
 * Function: square
 * Usage: int square (int n);
 * --------------------------
 * Returns the square of a number.
 */

int square (int n) {
  
  return n * n;
}
