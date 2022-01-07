/*
 * File:array.c 
 * ------------
 * This program loads an integer array  with numbers
 * 0 through 99.
 */

#include <stdio.h>

int main(void) {
   int x[100]; /* This declares a 100-integer array */
   int i;

   for (i = 0; i < 100; ++i) { /* Load x with values 0 through 99 */
      x[i] = i;
   }
   for (i = 0; i < 100; ++i) {  /* Display contents of x */
      printf("%d  ", x[i]);
   }
   return 0;
}
