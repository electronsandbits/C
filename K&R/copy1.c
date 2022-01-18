/*
 * File: cop1y.c 
 * ------------
 * This program copies its input to its output
 * one charactert at a time.
 */

#include <stdio.h>

int main()
{
   int c;

   while ((c = getchar()) != EOF) {
      putchar(c);
      
   }
}
