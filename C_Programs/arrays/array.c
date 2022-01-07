/*
 * File:array.c
 * ------------
 * This program  illustrates the input/output techniques
 * using an array named grades that is defined to store
 * seven integers numbers. 
 */

#include <stdio.h>

/* Constants */

#define MAXGRADES 7

/* Main program */

int main() {
   int grades[MAXGRADES];
   int i;

   /* Input the grades */
   for (i = 0; i < MAXGRADES; i++) {
      printf("Enter a grade: ");
      scanf("%d", &grades[i]);
   }

   /* Display the grades */
   for (i = 0; i < MAXGRADES; i++) {
      printf("grades %d is %d\n", i, grades[i]);
   }
   
   return 0;   
}
