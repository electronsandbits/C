/*
 * File: prog_ex2.c
 * ----------------
 *
 */

#include <stdio.h>


/* Constants */

#define RATES 7


/* Main program */

int main () {
   int i;
   double rates[] = {12.9, 19.6, 11.4, 13.7, 9.5, 15.2, 17.6};

   for (i = 0; i < RATES; i++) {
      printf("Element %d is %lf\n", i, *(rates + i));
   }
   return 0;
}
