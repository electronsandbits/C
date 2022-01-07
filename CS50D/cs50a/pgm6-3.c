/* 
 * File: pgm6-3.c
 * --------------
 * This program converts from Fahrenheit temperature
 * to Celsius equivalente temperature. The program stars
 * by  prompting the user to enter  the desired temperature  
 */ 


#include <stdio.h>

/* Constants */

#define MAXCOUNT 4

/* Function prototypes */
void tempConvert(float ); 

/* Main Program */

int main() {
   int count;    
   float fahren;

   for (count = 1; count <= MAXCOUNT; count++)  {
      printf("Enter a Fahrenheit temperature: ");
      scanf("%f", &fahren);
      tempConvert(fahren);  /* Function call */
   }
   return 0;
}

/* 
 * Function:tempConvert
 * Usage:
 * ---------------------
 * Returns the Celcius equivalent temperature.
 */ 
 
void tempConvert(float inTemp) {
   printf("The Celsius equivalent is %6.2f\n", (5.0/9.0) * (inTemp - 32.0) );
}
