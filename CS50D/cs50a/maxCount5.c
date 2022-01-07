/* 
 * File:maxCount5.c
 * ----------------
 * This program calculates the average  of seven 
 * user- entered numbers.
 */
 
#include <stdio.h>

/* Constants */

#define MAXCOUNT 7

/* Main program */

int main () {
   int count;
   float num, total, average;

   total = 0.0;
   for (count = 0; count <= MAXCOUNT; count++)  {
      printf("Enter a number : ");
      scanf (" %f", &num);
      total += num;
   }
   average = total / MAXCOUNT;
   printf("\n\nThe average of the %d numbers entered is %f\n", MAXCOUNT, average);

   return 0;
}


