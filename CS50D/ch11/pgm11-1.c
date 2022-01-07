/*
 * File:pgm11-1.c
 * --------------
 * This program  display the value of the grade array 
 * using standard subscript notation.
 */


#include <stdio.h>


/* Constants */

#define NUMELS 7

/* Main program */

int main() {
   int i;
   int grade[] = {108, 84, 96, 72, 144, 12, 24};

   for (i = 0; i < NUMELS; i++) {
      printf("Element %d is %d\n", i , grade[i]);
   }
   return 0;
 }



