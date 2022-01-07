/*
 * File: ptr.c 
 * ----------- 
 * This program illustrates pointers basics.
 */


#include <stdio.h>

int main() {
   int i, j;
   int *p;   /* a pointer to an integer */
   p = &i;   /* p points to i */
   *p = 5;   /* the object to which p currently points - that is i */
   j = i;    /* j = 5 */
   printf("%d %d %d\n", i, j, *p);
   
   return 0;
 
}
