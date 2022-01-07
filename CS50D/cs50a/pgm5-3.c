/* 
 * File: pgm5-3.c
 * --------------
 * This program prints a table of numbers from 1 to 10 with 
 * their squares and cubes.
 */

#include <stdio.h>
#define TABLESIZE 12

int main () {
   int num;

   printf("NUMBER SQUARE CUBE\n");
   printf("------ ------ ----\n");

   num = 1;
   while (num <= TABLESIZE)  {
      printf("%3d %7d %6d\n", num, num*num, num*num*num);
      num++; /* add 1 to num */
   }
   return 0;
}
