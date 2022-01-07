/*
 * File: copy2.c
 * -------------
 * This program copy its inputs to outputs.
 */

#include <stdio.h>

int main () {
   int c;

   while ((c = getchar()) != EOF) {
      putchar (c);
   }
   return 0;
}
