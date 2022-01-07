/*
 * File:grades2.c 
 * --------------
 * Each element's value is accumulated  in a total
 * which is displayed upon completion of the individual
 * display of the each array element.
 */


#include <stdio.h>

/* Constants */

#define MAXGRADES 5

/* Main program */

int main (void) {
   int grades [MAXGRADES];
   int i, total;

   /* Input the grades */
   for (i = 0; i < MAXGRADES; i++) {
      printf("Enter a grade: ");
      scanf("%d",  &grades[i]);
   }
   /* Display and total the grades */
   printf("\nThe total of the grades ");
   for (i = 0; i < MAXGRADES; i++) {
      printf("%d",  grades[i]);
      total += grades[i];
   }
   printf("is %d\n",  total); /* Display the total */
   
   return 0; 

}
