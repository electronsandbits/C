/*
 * File: fibonacci.c
 * -----------------
 * This program generates the first 15 Fibonacci numbers.
 * The first two Fibonacci numbers, called F0 and F1, are defined to be 0 
 * and 1, respectively. *  Thereafter, each successive Fibonacci number Fi 
 * is defined to be the sum of the two preceding Fibonacci numbers Fi−2 and Fi−1.
 *  So F2 is calculated by adding together the values of F0 and F1.
 */

#include <stdio.h>

int main (void) {
   int Fibonacci[15], i;
  
   /* By definition */
   Fibonacci[0] = 0;
   Fibonacci[1] = 1;
  
   /* Fibonacci Algorithm */
   for (i = 2; i < 15; i++) {
      Fibonacci[i] = Fibonacci[i -2] + Fibonacci[i-1];
   }
   
   /* Print the Fibonacci table */
   for ( i = 0; i < 15; ++i ) {
      printf("%i\n", Fibonacci[i]);
   }
   
   return 0;
}
