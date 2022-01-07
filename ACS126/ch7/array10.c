/*
 * File: array8.c
 * --------------
 * This program illustrates the element-by-element
 * addition  of array a to array b with the result stored 
 * in array c.
 */

#include <stdio.h>


/* Constants */

#define SIZE 5

/* Main program */

int main() {
   int i, c[SIZE]; 
   int a[SIZE] = {12, 18, 9, 23, 16};
   int b[SIZE] = {6, 9, 4, 11 , 8}; 
   
   for (i = 0; i < SIZE; i++) {
      c[i] = a[i] + b[i];
      printf("%d\n",  c[i]);
   }
   
   return 0;
}
