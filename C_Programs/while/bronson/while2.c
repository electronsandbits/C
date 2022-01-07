/*
 * File: while2.c
 * --------------
 * This program prints a table of numbers from 1 to 14
 *  with their squares and cubes.
 */

#include <stdio.h>

/* Constants */

#define TABLESIZE 14

int main() {
   int num;

   printf ("NUMBER SQUARE CUBE\n");
   printf(" ------ ------ ----\n");
  
   num = 1;
   while (num <= TABLESIZE)  {
      printf("%3d %7d %6d\n", num , num * num, num* num * num );
      num++;
   }
   
   return 0;
}


