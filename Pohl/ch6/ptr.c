/*
 * File:pointer.c
 * --------------
 * This program illustrates the distinction between a pointer value
 * and its deferenced value. We will use the %p format to print the value
 * of a pointer, which on most systems produces a hexadecimal number.
 */ 
#include <stdio.h>

int main () {
   int i = 7,  *p = &i;

   printf("%s%d\n%s%p\n", "  Value of i: ", *p, "Location of i: ", p);

   return 0;

}
