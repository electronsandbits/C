/* 
 * File:maxCount.c
 * ---------------
 * This program accepts and then display seven user-entered 
 * numbers, one at a time.
 */

#include <stdio.h>
 
/* Constants */

#define MAXCOUNT 7

/*  Main program */

int main (void) {
   int count;
   float num;
  
   printf("\nThis program will ask you to enter %d numbers.\n\n", MAXCOUNT);

   count = 1;
   while (count <= MAXCOUNT) {
      printf("Enter a number: "); 
      scanf ("%f", &num);
      printf("The number entered is %f\n", num);
      count ++;
   }
  
   return 0;
}




 
