/*
 * File: array.c
 * -------------
 * This program illustrates one-dimensional.
 */

#include <stdio.h>

int main() {
   int a[100]; /* This declares a 100-integer array */
   int i;

   /* Load a with values 0 through 99 */
   for (i = 0; i < 100; ++i) {
      a[i]  = i;
   }

   /* Display contents of a */
  for (i = 0; i < 100; ++i) {
     printf("%d\n", a[i]);	  
  }

  return 0;  

}
