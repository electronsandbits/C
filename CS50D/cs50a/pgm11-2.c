/* 
 * File: pgm11-2.c 
 */

#include <stdio.h>

/* Constants */

#define NUMELS 5

/* Main program */

int main() {
   int *gPtr; /* declare a pointer to an int */
   int i;
   int grade[] = {98, 87, 92, 79, 85};
  
   /* store the starting array address */
   gPtr = &grade[0];
   
   for (i = 0; i < NUMELS; i++) {
      printf("Element %d is %d\n", i, *(gPtr + i) );
   }
   return 0;
}
