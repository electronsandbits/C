/*
 * File:heap.c 
 * -----------
 * This program demonstrates the simplest
 * possible use of the heap.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
   int *p;

   p = (int *) malloc(sizeof(int));
   if (p == 0) { /* if (!p) = if(p == NULL) */
     printf("ERROR: Out of memory\n");
     return 1;
   }
   *p = 5;  
   printf("%d\n", *p);
   free(p);
  
   return 0;

}
