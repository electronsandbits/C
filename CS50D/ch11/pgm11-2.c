/*
 * File:pgm11-2.c 
 * --------------
 * This program illustrates  how the array elements  can 
 * be accessed using pointers, therefore illustrating the 
 * relationship between array elements and pointers.
 */

#include <stdio.h>


/* Constants */

#define NUMELS 7

/* Main program */

int main() {
   int *gPtr;  /* Declare a pointer to an int */
   int i;
   int grade[] = {96, 84, 92, 72, 108, 144, 120};

   gPtr = &grade[0]; /* Store the starting array address */
  
   for (i = 0; i < NUMELS; i++) {
      printf("Element %d is %d\n", i, *(gPtr + i));
   }
   return 0;
}
