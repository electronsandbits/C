/*
 * File: celsius.c
 * ---------------
 * This program prompts the user to enter a Fahrenheit
 * temperature, it then prints the equivalent Celsius 
 * temperature.
 */

#include <stdio.h>



/* Constants */

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)


/* Main program */

int main (void) {
   float fahrenheit, celsius;
   printf("Enter Fahrenheit temperature: ");
   scanf("%f", &fahrenheit);

   celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
   printf("Celsius equivalent: %.1f\n", celsius);

   return 0;

}
