/*
 * File:pointer.c
 * --------------
 * This program illustrates dereferencing a pointer using 
 * the indirection operator. The indirection operator, *, returns 
 * the value pointed to by a pointer variable.
 */

#include <stdio.h>


int main() {
   int num = 12;
   int *pi = &num;

   printf("%d\n", *pi);

   printf("\n");

   *pi = 144;
   printf("%d\n", num);




   return 0;



}
