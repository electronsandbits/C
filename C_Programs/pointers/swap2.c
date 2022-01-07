/*
 * File: swap2.c
 * ------------
 * This program illustrates  using pointers for function
 * parameters.
 */

#include <stdio.h>


/* Function prototypes */

void swap (int *i, int *j);


/* Main program */

int main () {
   int a, b;

   a  = 12;
   b  = 144;
   printf("%d %d\n", a, b);
   swap(&a, &b);             /* Function's call */
   printf("%d %d\n", a, b);

   return 0;
}

/*
 * Function: swap
 * Usage: swap(i, j);
 * ------------------
 * swap i and j.
 */
 
 void swap (int *i, int *j) {
    int t;
    t = *i;
    *i = *j;
    *j = t;
}
