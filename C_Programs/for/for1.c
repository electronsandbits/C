/*
 * File:for1.c
 * -----------
 * This program illustrates the for loop.
 */

#include <stdio.h>

int main() {
   int count;

   count = 2;
   for (; count <= 20; count+= 2) {
      printf("%d\n", count);
   }

   return 0;  
}

