/* 
 * File: tableSize.c 
 * -----------------
 * This program prints a table of numbers
 * including their squares and cubes.
 */

#include <stdio.h>

/* Constants */
#define TABLESIZE 14

int main (void) {
   int num;

   printf("NUMBER SQUARE CUBE\n");
   printf("------ ------ ----\n");

   for (num = 0; num <= TABLESIZE; num ++) {
      printf("%3d %7d %6d\n", num, num * num, num * num * num );
   }
   return 0;

}
