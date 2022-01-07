/*
 * File: pointer.c 
 * ---------------
 * This program illustrates  the distinction between a pointer value
 * and its dereferenced value. Also, its illustrates how the %P format
 * can be used to print pointer values, or addresses.
 */

#include <stdio.h>

int main (void) {
   int i = 777, *p = &i;
  
   printf(" Value  of i: %d\n",*p);
   printf("Address of i: %u or %p\n", p, p);

   return 0;

}
