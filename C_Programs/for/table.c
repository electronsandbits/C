/*
 * File: table.c
 * -------------
 * This program prints a table of numbers
 * from 1 to 14, including their squares and cubes.
 */
 
#include <stdio.h>

/* Constants */

#define TABLESIZE 14

/* Main program */

int main() {
   int num;	

   printf("NUMBER SQUARE CUBE\n");
   printf("------ ------ ----\n");

   for (num = 1; num <= TABLESIZE; num++) {
      printf("%3d %7d %6d\n", num, num * num, num * num * num); 
   }	   

   return 0; 
}
