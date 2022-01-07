/*
 * File: string1.c 
 * ---------------
 * This  program illustrates basic string processing 
 * with getchar(), and putchar().
 */

#include <stdio.h>


int main (void) {
   int c;
   
   while ((c = getchar()) != EOF) {
      putchar(c);
      putchar(c);
   }
   return 0;
   
}
