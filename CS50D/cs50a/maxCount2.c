/* 
 * File:maxCount2.c
 * ---------------
 * This program accepts and then display seven user-entered 
 * numbers, one at a time and then total them.
 */

#include <stdio.h>
 
/* Constants */

#define MAXCOUNT 7

/*  Main program */

int main (void) {
   int count;
   float num, total;
  
   printf("\nThis program will ask you to enter %d numbers.\n\n", MAXCOUNT);

   count = 1;
   total = 0.0;
   while (count <= MAXCOUNT) {
      printf("Enter a number: "); 
      scanf ("%f", &num);
      total += num; 
      printf("The total is now  %f\n", total);
      count ++;
   }

   printf("\nThe  final total of the  %d numbers is %f\n", MAXCOUNT, total);

   return 0;
}
