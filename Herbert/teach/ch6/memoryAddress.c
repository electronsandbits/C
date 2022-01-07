/*
 * File: memoryAddress.c
 * ---------------------
 * You can use printf() to display the memory address contained
 * in a pointer by using the %p format specifier. we can use this 
 * printf() capability to illustrate several aspects of pointer arithmetic.
 * The following program, for example, shows how all pointer arithmetic 
 * is relative to the basetype of the pointer.
 */

#include <stdio.h>


int main() {
   char *cp, ch;
   int *ip, i;

   float *fp, f;
   double *dp, d;

   cp = &ch;
   ip = &i;
   fp = &f;
   dp = &d;

   /* print the current values */
   printf("%p %p %p %p\n", cp, ip, fp, dp);

   /* now increment them by one */
   cp++;
   ip++;
   fp++;
   dp++;

   /* print their new values */
   printf("%p %p %p %p\n", cp, ip, fp, dp);
 
   return 0;
}

