/*
 * File:counterPtr.c
 * -----------------
 * Write a program with a for loop that counts
 * from o to 9, displaying the numbers on the screen;
 * Print the numbers using a pointer.
 */

#include <stdio.h>

int main()  {  
   int i, *p;

   p = &i;

   for (i = 0; i < 10; i++) {
      printf("\n%d", *p);
:w

   }
   
   return 0;
}
