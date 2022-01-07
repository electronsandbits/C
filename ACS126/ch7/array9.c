/*
 * File: array8.c
 * --------------
 * This program illustrates the addition  of a 
 * scalar to the elements of an array.
 */

#include <stdio.h>


/* Constants */

#define SIZE 5

/* Main program */

int main() {
   int i; 
   int a[SIZE] = {12, 60, 48, 72, 96};

   for (i = 0; i < SIZE; i++) {
      a[i] = a[i] + 12;
      printf("%d\n",  a[i]);
   }
   
   return 0;
}
