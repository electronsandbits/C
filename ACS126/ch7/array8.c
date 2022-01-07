/*
 * File: array8.c
 * --------------
 * This program illustrates the mechanism of array manipulation.
 */

#include <stdio.h>


/* Constants */

#define SIZE 5

/* Main program */

int main() {
   int i; 
   float b[SIZE];

   float a[SIZE] = {12.75, 18.34, 9.85, 23.78, 16.96};

   for (i = 0; i < SIZE; i++) {
     // b[i] = a[i];
      b[SIZE - 1 -i ] = a[i];
      printf("%f\n",  b[SIZE -1 - i]);
   }
   
   return 0;
}
