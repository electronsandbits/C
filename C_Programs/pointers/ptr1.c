/*
 * File:ptr2.c 
 * -----------
 * A simple program illustrating pointers.
 */

#include <stdio.h>

int main() {
   int i, j;
   int *p;
   printf("%d %d\n", p, &i);
   p = &i;
   printf("%d %d\n", p, &i);

   return 0;
}
