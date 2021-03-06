/* 
 * File: tempConversion.c
 * ----------------------
 * This program prompts the user to enter a Fahrenheit temperature
 * after the user inputs the corresponding temperature the program then
 * converts from  Fahrenheit  temperatures to Celsius.
 */

#include <stdio.h>

/* Constants */

#define MAXCOUNT 4

/* Function prototypes */

void tempConvert(float);

/* Main program */

int main() {
   int count;
   float fahren;
  
   for (count = 1; count <= MAXCOUNT; count ++) {
      printf("Enter a Fahrenheit temperature: " );
      scanf("%f", &fahren);
      tempConvert(fahren);   /* Function's call */
   }
  
   return 0 ;
 }

/* 
 * Function: tempConvert
 * Usage: float (inTemp);
 * ----------------------
 * Returns the Celsius equivalent of the Fahrenheit temperature.
 */

void tempConvert(float inTemp) {
   printf("The Celsius equivalent is %6.2f\n", (5.0/9.0) * (inTemp - 32.0));
} 
