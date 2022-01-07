/*
 * File: maxMin.c
 * --------------
 * This program locate both the maximun and mininum value 
 * within an array.
 */

#include <stdio.h>

/* Constants */

#define RATES 9

/* Main program */

int main() {
   int i;  
   double max, min;
   double rates[RATES] = {18.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92};

   max = min = rates[0];
   for (i = 0; i < RATES; i++) {
      if  (rates[i] > max) {
         max = rates[i];
      } else {
     	 min = rates[i];
      }
     
   }
   printf("The maximun value is %lf\n", max);
   printf("The minimun value is %lf\n", min);

   return 0;
}
