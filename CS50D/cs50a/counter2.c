/* 
 * File: counter2.c 
 * ----------------
 * This program demonstrates simple use of 
 * the While statement.
 */

#include <stdio.h>

int main (void) {
   int i;

   i = 14; 
   while (i >= 1) {
      printf("%d ", i);
      i--;
   }
   printf("\n");
   
   return 0;
}


