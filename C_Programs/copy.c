/*
 * File: copy.c 
 * ------------
 * This programs copy inputs to outputs.
 */


#include <stdio.h>

int main () {
   int c;
  
   c = getchar();
   while (c != EOF) {
      putchar (c);
      c = getchar();
   }
   return 0;
}
