/* 
 * File: array4.c 
 * --------------
 * This program illustrates standard outpurt of integers
 * The elements of the array are printed vertically in a column.
 */

#include <stdio.h>

/* Constants */

#define N 5


/* Main program */

int main() {
   int i;
   int a[N] = {12, 13, 25, 16, 43};

   for (i = 0; i < N; i++) {
      printf("%d\n", a[i]);
   }
   
   return 0;
} 
