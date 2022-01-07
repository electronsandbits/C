/*
 * File: while1.c
 * --------------
 * Simple while loop.
 */

#include <stdio.h>

int main() {
   int i;

   i = 10;
   while ( i >= 1)  {
      printf("%d ", i);
      i--; 
   }
   
   printf("\n");

   return 0;

}
