/* 
 * File : pgm5-6.c
 * ---------------
 * This program illustrates computation of running total and average
 * using a while loop.
 */

#include <stdio.h>
#define MAXCOUNT 4

int main() {

   int count;
   float num, total;

   printf("\nThis program will ask you to enter %d numbers.\n\n", MAXCOUNT); 

   count = 1;
   total = 0.0;
   while (count <= MAXCOUNT) {
      printf("Enter a number: ");
      scanf("%f", &num);
      total += num;
      printf("The total is now %f\n", total);
      count++;
   }
   printf("\n\nThe final total of the %d numbers is %f\n", MAXCOUNT, total);
 
   return 0;
}
