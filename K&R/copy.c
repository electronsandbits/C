/*
 * File: copy.c 
 * ------------
 * This program copies its input to its output
 * one charactert at a time.
 */

#include <stdio.h>

int main()
{
   int c;

   c = getchar();
   while (c != EOF) {
      putchar(c);
      c = getchar();
   }
}
