/*
 * File:ptr.c
 * ----------
 *  This program illustrates pointer assignments.
 */

#include <stdio.h>

int main() {
   int x = 1026;
   int *ptr1, *ptr2;

   ptr1 = &x; /* places into p the memory address of the variable x */
   ptr2 = ptr1;  /* Pointer assigment: makes ptr2 and ptr1 point to the same location */
   
   /* print the value of x twice */
   printf("Values at ptr1 and ptr2: %d %d\n", *ptr1, *ptr2);

   /* print the address of x twice */
   printf("Addresses pointed to by ptr1 and ptr2: %p %p\n", ptr1, ptr2);

   return 0;

}

