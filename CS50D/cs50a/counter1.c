/* 
 * File:counter1.c
 * ----------------
 * This program illustrates the while stament.
 */

#include <stdio.h>

int main (void) {
   int  count;

   count = 1;
   while  (count <= 12) {
      printf("%d ", count);
      count ++;
   }
   printf("\n");
   
   return 0;
}
