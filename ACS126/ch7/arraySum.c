/*
 * File: arraySum.c
 * --------------
 * This program illustrates the  summation of 
 * of elements of an array. 
 */

#include <stdio.h>


/* Constants */

#define SIZE 12

/* Main program */

int main() {
   int i, sum;
   int a[SIZE] = {12, 24, 36, 48, 60, 72, 84, 96, 108, 120, 132, 144};
   
   sum = 0;   
   for (i = 0; i < SIZE; i++) {
      sum += a[i];
   }
   printf(" Sum is: %d\n",  sum);
   return 0;
}
