/* 
 * File: prog5-1.c 
 * ---------------
 * This program prints the numbers 2 t0 10 in increments of two.
 */

#include <stdio.h>

int main () {
   int count;

   count = 2; 
   while (count <= 10) {
      printf("%d ", count);
      count = count + 2;
   }

}
