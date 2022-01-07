/*
 * File: heap1.c 
 * -------------
 * This program show two different valid uses of pointers.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
   int *p, *q;

   p = (int *) malloc(sizeof(int));
   q = p;
   *p = 10;
   printf("%d\n", *q);
   *q = 20;
   printf("%d\n", *q);


   return 0;
}


