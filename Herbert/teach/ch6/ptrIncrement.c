/*
 * File: ptrIncrement.c
 * --------------------
 * The following program illustrates the need for parentheses
 * when you want to increment the object pointed to by a pointer
 * instead of the pointer itself.
 */

#include <stdio.h>

int main() {
   int *p, q;

   p = &q;

   q = 1;
   printf("%p ", p);

   *p++; /* this will not increment q */
   printf("%d %p\n", q, p);



   return 0;

}


