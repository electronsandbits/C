/* 
 * File:maxCount3.c
 * ---------------
 * This program accepts and then display seven user-entered 
 * numbers, one at a time and then average them.
 */

#include <stdio.h>
 
/* Constants */

#define MAXCOUNT 7

/*  Main program */

int main (void) {
   int count;
   float num, total, average;
  
   printf("\nThis program will ask you to enter %d numbers.\n\n", MAXCOUNT);

   count = 1;
   total = 0.0;
   while (count <= MAXCOUNT) {
      printf("Enter a number: "); 
      scanf ("%f", &num);
      total += num; 
      count ++;
   }

   average  = total / MAXCOUNT;
   printf("\nThe  average of the  %d numbers is %f\n", MAXCOUNT, average);

   return 0;
}
