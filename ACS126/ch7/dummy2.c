/*
 * File: dummy2.c 
 * -------------
 * This program illustrates simple array operations.
 */

#include <stdio.h>

/* Constants */

#define SIZE 5


/* Main program */

int main() {
   int i, a[5]= {2, 5, 6, 7, 12};
   int b[5]= {5, 3, 6, 1, 2};
   
   for (i = 0; i < 5; i++) {
      a[i] = a[i] + b[i];
      b[i]= a[i] * 5;
      printf(" %d   %d\n", a[i], b[i]);
   }
   return 0;
}
