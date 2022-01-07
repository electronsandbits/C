/*
 * File:dayMonth.c
 * ---------------
 * This short program prints the number of days per month.
 */ 

#include <stdio.h>

/* Constants */

#define MONTHS 12

/*  Main program */

int main() {
   printf("Prints the days for each month:\n");

   int days [MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int index;

   for (index = 0; index < MONTHS; index++) {
      printf("MONTH %2d has %d days\n", index + 1, days[index]);

   }

   return 0;


}






