/*
 * File: pgm8-2.c 
 * --------------
 * In this program each element's value is 
 * accumulated in a total, which is displayed  upon 
 * completion of the individual  disply of each array  element.
 */

#include <stdio.h>

/* Constants */

#define MAXGRADES 5

/* Main program */

int main() {
   int grades[MAXGRADES];
   int i, total = 0; 

   /* Input the grades */
   for (i = 0; i < MAXGRADES; i++) {
      printf("Enter a grade:");
      scanf("%d", &grades[i]); 
      // total += grades[i]; 
   }
  
   /* Display and total the grades */
   printf("\nThe total of the grades ");
   for (i = 0; i < MAXGRADES; i++) {
      printf("%d ", grades[i]); /*  85 90 78 75 92 */
      total += grades[i];
   }
   printf("is %d\n", total);
   
   return 0;
}
