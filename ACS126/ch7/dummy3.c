/*
 * File: dummy3.c 
 * -------------
 * This program illustrates simple array operations.
 */

#include <stdio.h>

/* Constants */

#define N 5


/* Main program */

int main() {
   int i;
   int a[N] = {2, 5, 6, 7, 12};
   int b[N] = {5, 3, 6, 1, 2};
   
   for (i = 0; i < N; i++) {
      a[i] = a[i] + b[3];
      b[i] = a[i] * b[2];
      printf("%d    %d\n", a[i], b[i]);
   }
  
   return 0;
}
