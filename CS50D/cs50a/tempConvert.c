/*
 * File:tempConvert.c 
 * ------------------
 * This program converts from Fahrenheit temperature 
 * to corresponding Celsius equivalent temperature.
 * The program asks the user to input the Fahrenheit 
 * temperature and then displays the Celsius equivalent.
 */

#include <stdio.h>

/* Constants */

#define MAXCOUNT 4

/* Function prototypes */

void tempConvert (float);

/* Main program */

int main () {
   int count;
   float fahren; 
  
   for (count = 1; count <= MAXCOUNT; count++) {
      printf("Enter a Fahrenheit temperature: ");
      scanf("%f", &fahren);
      tempConvert(fahren);  /* Function call */
   }
   return 0;   
}

/* 
 * Function:tempConvert
 * Usage: 
 * --------------------
 * Returns Celsius equivalent temperature.
 */

void tempConvert (float inTemp) {
   printf("The Celsius equivalent is %6.2f\n", (5.0 / 9.0) * (inTemp - 32.0) );
}
