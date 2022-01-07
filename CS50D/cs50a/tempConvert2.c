/*
 * File: tempConvert2.c 
 * --------------------
 * This program converts from Fahrenheit temperature 
 * to Celsius equivalent.
 */

#include <stdio.h>

/* Constants */

#define MAXCOUNT 4

/* Function prototypes */

float tempConvert (float);

/* Main program */

int main () {
   int count;
   float celsius, fahren; 

   for (count = 1; count <= MAXCOUNT; count++) {
      printf("\nEnter a Fahrenheit temperature: ");
      scanf("%f", &fahren);
      celsius = tempConvert(fahren);
      printf("The celsius equivalent is %5.2\n", celsius);
   }
   return 0;
}

/*
 * Function:tempConvert
 * Usage: 
 * --------------------
 * Returns celsius temperature.
 */

float tempConvert (float intTemp) {
  
    return ((5.0 / 9.0) * (inTemp - 32.0));

}
