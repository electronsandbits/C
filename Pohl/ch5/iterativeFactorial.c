/*
 * File:iterativeFactorial.c
 * -------------------------
 *  This program computes th factorial of n using a traditional
 *  iterative approach.
 */

#include <stdio.h>

/* Function prototypes */

int factorial (int n);


/* Main program */

int main () {
   int result = factorial(7); /* Function's call */

}


/* 
 * Function: fact
 * Usage: int f = fact(n);
 * -----------------------
 * Computes the factorial of n using a traditional iterative approach
 */  
 

int factorial(int n) {
   int i, product = 1;
   for (i = 2; i <= n; ++i) {
      product  *= i;
   }

   return product;
}

}
