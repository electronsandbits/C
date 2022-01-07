/*
 * File: char.c
 * ------------
 * This program reads characters one after another from the 
 * standard input file, which is normally connected to the 
 * keyboard, and writes each characters twice to the standard
 * output file, which is normally connected to the screen.
 */

#include <stdio.h>

#define EOF (-1)

int main() {
   int c;

   while ((c = getchar()) != EOF) {
      putchar(c);
      putchar(c);
   }
   
   return 0;
}
