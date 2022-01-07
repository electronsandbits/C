/*
 * File: power.c 
 * -------------
 * This program raises an integer m to a 
 * positive integer power n.
 * That is, the value of power(2,5) is 32.
 */

#include <stdio.h>


/* Function prototypes */

int power(int m, int n);


/* Main program */

int main() {
   int i;

   for (i = 0; i < 10; ++i)
      printf("%d %d %d\n", i, power(2, i), power(-3,i)); /* Function's call */
  
   return 0;
}

/*
 * Function: power
 * Usage:int power(m, n)
 * ---------------------
 * Raise base to n-th power; n >= 0
 */

int power(int base, int n) {
   int i, p;
  
   p = 1;
   for (i = 1; i <= n; ++i) {
      p = p * base;
   }
   return p;
}






