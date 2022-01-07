/*
 * File: prog2.c 
 * -------------
 *
 */


#include <stdio.h>


/* Constants */

#define TEMP 15


/* Main program */

int main() {
   int temp[TEMP];
   int i, average;

  
   /* Input the integers numbers */

   for (i = 1; i < TEMP; i++) { 
      printf("Enter the numbers:  ");
      scanf("%d", &temp[i]);
     
   }

   /* Display and average the numbers */
   printf("\nThe average of the numbers    ") ;
   for (i = 0; i < TEMP; i++) {
      printf(" %d", temp[i]);
      average = temp[i] / 2.0;
   }
   printf(" is %d\n    ",  average);
   
   return 0;
}
