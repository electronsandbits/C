/* 
 * File:ConsecIntegers.c
 * ---------------------
 * This program display the consecutive digits
 * 0, 1, 2,..., 9, with one digit on each line.
 */


#include <stdio.h>

int main () 
{
   int digit = 0;

   while (digit <= 9) {
      printf("%d\n", digit++);
      /* ++digit; */
   }

   return 0;
}
