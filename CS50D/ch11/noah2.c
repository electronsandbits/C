/*
 * File:noah2.c
 * ------------
 * This program uses pointers, instead of of subscript to
 * access array elements.
 */

#include <stdio.h>

/* Constants */

#define BOAT 7 

/* Main program */

int main ()  {
   int i;
   int *gPtr; /* Declare a pointer to an int */
   int specs[] = { 133, 22, 13, 44, 75, 45, 18};
  
   /* Store the starting array address */
   gPtr = &specs[0];

   /* Display the Specs */

   for (i = 0; i < BOAT; i++)  {
      printf("Specification %d is %d\n", i, specs[i]);
   }

   return 0;
  
}

