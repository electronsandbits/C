/*
 * File:square.c
 * -------------
 * This program computes the square of a number.
 * Simple illustration of call by Value.
 */
#include <stdio.h>

/* Function prototypes */

int square (int x);

/* Main program */

int main()  {
   int t = 12;

   printf("%d %d\n", square(t), t);

   return 0;
}

/* 
 * Function: sqr
 * Usage: int x = x * x;
 * ---------------------
 * Returns the number squared.
 */

int square(int x)  {
   x = x * x;
   return(x); 
}

	
