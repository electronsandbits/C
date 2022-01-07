/*
 * File:ptr2.c
 * -----------
 * This program assigns q a value indirectly using the pointer.
 * It is possoble to use the * operator on the left side of an assignment
 * statement in order to assign a variable a new value given a pointer
 * to it.
 */

#include <stdio.h>

int main() {
   int *p , q;

   p = &q;  /* get q's address */
 
   *p = 199; /* assign q a variable using a pointer */

   printf("q's value is %d\n", q);

   return 0;


}

   


