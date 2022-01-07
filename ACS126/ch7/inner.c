/*
 * File: inner.c 
 * -------------
 * This program computes the inner product of two vectors.
 */

#include <stdio.h>


/* Constants */
#define SIZE 3


int main() {
   int i;
   int x[SIZE] = { -1, 2, 2};
   int y[SIZE] = { 1, 0, -3};

   int sum = 0;
   for (i = 0; i < SIZE; i++) {
      sum += x[i] * y[i];
   } 
   printf("The inner product  is %d\n", sum);
   
   return 0;
}
