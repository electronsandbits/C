/* 
 * File: prog3.c 
 * --------------
 * This program accepts a list of integer numbers
 * Calculate their averages and then uses this average 
 * to determine the deviation.
 */

#include <stdio.h>
#include <math.h>


/*Constants */

#define GRADES 14

/* Main program */

int main() {
   int grades[GRADES] = {89, 95, 72, 83, 
                        99, 54, 86, 75, 92,
                        73, 79, 75, 82, 73};

   int i, total = 0;
   double average, deviation;

   /* Input the grades */
   
   for (i = 0; i < GRADES; i++) {
      printf("Enter the grades: ");
      scanf("%d", &grades[i]);
   }

   /* Display and average the grades */
   printf("\nThe average of the grades ");
   for (i = 0; i < GRADES; i++) {
     printf("%d ", grades[i]);
     total = total + grades[i];
     average  = total / 14.0;
   }
   printf("is %lf\n", average);  

   /* Calculate the deviation */
   deviation = average - grades[i];
   printf("deviation %d is %lf\n", i, deviation);
  
   return 0;
}
 
