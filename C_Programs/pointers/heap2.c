/*
 * File: heap2.c 
 * -------------
 * This program show two different valid uses of pointers.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
   int *p, *q;

   p = (int *) malloc(sizeof(int));
   p = (int *) malloc(sizeof(int));
   *p = 10;
   *q = 20;
   *p = *q;
   printf("%d\n", *p);
  
   return 0;
}
