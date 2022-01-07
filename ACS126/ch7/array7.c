/*
 * File: array7.c 
 * --------------
 * This program demonstrates the output of parallel arrays.
 */


#include <stdio.h> 

/* Constants */

#define N 5

/* Main program */

int main() {
   int i;
   int x[N] = {10, 15, 18, 45, 62};
   int y[N] = {26, 45, 53, 98, 70};

   printf("Array x: ");
   for (i = 0; i < N; i++) {
      printf("%d   ", x[i]);
   }
   printf("\n\n");

   printf("Array y: ");
   for (i = 0; i < N; i++) {
      printf("%d  ", y[i]);
   }
   printf("\n");


   return 0;
}
