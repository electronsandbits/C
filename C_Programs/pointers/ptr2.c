/*
 * File:ptr2.c
 * -----------
 * This program illustrates pointers assignment.
 */

#include <stdio.h>

int main() {
   int x = 42;
   int *p1, *p2;

   p1 = &x;
   p2 = p1; /* p1 and p2 both point to x */

   /* Print the value of x twice */
   printf("Values at p1 and p2: %d  %d\n", *p1, *p2);

   /* Print the address of x twice */
   printf("Addresses pointed to by p1 and p2: %p %p\n", p1, p2);

   return 0;
 
}

