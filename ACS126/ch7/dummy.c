/*
 * File: dummy.c 
 * -------------
 * This program illustrates simple array operations.
 */


#include <stdio.h>

/* Constants */

#define SIZE 5


/* Main program */

int main() {
   int i;
   int a[5], b[5];
   
   for (i = 0; i < 5; i++) {
      a[i] = i * 10.5;
      b[i]= a[i] + 45.0;
      printf("%d   %d\n", a[i],  b[i]);
   }
   return 0;
}
