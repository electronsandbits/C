/*
 * File:coldDays.c
 * ---------------
 * This program reads in a list of daily low temperatures (in Celsius)
 * and reports the total number of entries and the percentage that
 * were below freezing( that is, below zero degrees Celsius).It uses
 * scanf() in a loop to read in the values. Once during each loop cycle,
 * it increments a counter to keep track of the number of entries.
 * An if statement identifies temperatures below freezing and keeps
 * track of the number of below-freezing days separately.
 */

#include <stdio.h>

/* Constant */

const int FREEZING = 0;

/* Main program */

int main() {
   printf("Finds percentage of days below freezing.\n");

   float temperature;
   int coldDays = 0;
   int allDays  = 0;

   printf("Enter the list of daily low temperatures.\n");
   printf("Use Celsius, and enter q to quit.\n");

   while (scanf("%f", &temperature) == 1) {
      allDays++;
      if  (temperature < FREEZING) {
         coldDays++;
      }
   }
   if (allDays != 0) {
     printf("%d days total: %.1f%% were below freezing.\n", allDays, 100.0 * (float) coldDays / allDays);	     
   } else {
      printf("No data entered!\n");
   }

   return 0;

}


