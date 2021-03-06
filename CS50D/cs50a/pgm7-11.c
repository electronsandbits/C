/*
 * File: RecursiveFactorial.cpp
 * ----------------------------
 * This program computes f factorials 
 */


#include <stdio.h>

/* Function prototypes */
 int factorial(int); 


int main() {
   int n, result;
  
 printf("Enter a number: ");
   scanf("%d", &n);
   result = factorial(n);
   printf("\nThe factorial of %d is %d\n", n, result);
  
   return 0;
}

/*
 * Function: fact
 * Usage: int f = fact(n);
 * -----------------------
 * Computes the factorial of n using recursion.
 */

int factorial(int n) {
   if (n == 0) {
     return (1);
   } else {
      return (n * factorial(n-1));
   }
}
