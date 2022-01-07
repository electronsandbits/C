/*
 * File: for.c
 * -----------
 * This program illustrates the for loop.
 */

#include <stdio.h>

/* Constants */

#define MAXCOUNT 24

/* Main program */

int main() {
   int count;

   for (count = 2; count <= MAXCOUNT; count += 2) {
      printf("%d\n ", count);
   }
  
   return 0;

}


