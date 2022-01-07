/*
 * File: ptr3.c
 * ------------
 * This program illustrates the use of address operator.
 */

#include <stdio.h>

int main() {
   int i = 42;
   int *p;    

   p = &i;  /* store the address i into p */

   printf("The value of i is %d.\n", *p); /* Display the value of i */
   printf("%d\n", i);
   
   /* As long as p points to i, *p is an alias for i */
   *p = 133;

   printf("%d\n", i);
   printf("%d\n", *p);


   return 0;

}
