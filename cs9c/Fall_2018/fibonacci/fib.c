/*
 * File: fib.c 
 * -----------
 * This program prints Fibonacci numbers.
 */

#include <stdio.h>

int main() {
   int oldNumber;      /* previous Fibonacci number */
   int currentNumber;  /* current Fibonacci number  */
   int nextNumber;     /* next number in the series */

   oldNumber = 1;
   currentNumber = 1;

   printf("1\n");  /* Print first number */


   while (currentNumber < 100) {
      printf("%d\n", currentNumber);
      nextNumber = currentNumber + oldNumber;

      oldNumber = currentNumber;
      currentNumber = nextNumber;
   }

   return 0;

}   

