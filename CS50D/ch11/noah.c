/*
 * File:noah.c
 * -----------
 * This program illustrates standard subscript notation.
 */

#include <stdio.h>

/* Constant */

#define BOAT 8

/* Main program */

int main() {
   int i;
   int specs[] = {450, 133, 75, 22, 45, 13, 18, 44};

   /* Display the values of the array */

   for (i = 0; i < BOAT; i++)  {
      printf("Specification %d is %d\n", i, specs[i]);
   }   
  
   return 0;
}
