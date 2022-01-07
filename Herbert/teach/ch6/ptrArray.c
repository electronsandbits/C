/*
 * File: ptrArray.c
 * ----------------
 * This program illustrates the relationship between array name
 * and pointer, since an array name without an index is a pointer
 * to the start of the array, it stands to reason that you can assign 
 * that value to another pointer and acess the array using pointer
 * arithmetic.
 */

#include <stdio.h>


int main() {
   int a[10] = { 24, 21, 14, 42, 120, 153, 70, 80, 90, 100};
   int *p;

   p = a; /* assign p the adress of start of a */

   /* this prints a's first, second, and third elements */
   printf("%d %d d\n", *p, *(p + 1), *(p + 2));

   /* this does the same thing using a */
   printf("%d %d %d, a[0], a[1]. a[2]);

   return 0;

}
