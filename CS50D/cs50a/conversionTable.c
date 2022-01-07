/*
 * File:conversionTable.c
 * ----------------------
 * This program produce the Celsius-to-Fahrenheit 
 * temperature conversion table.
 * The program assumes that Fahrenheit temperature corresponding
 * to Celsius temperature range from 5 to 50 degrees and are
 * displayed in increment of 5 degrees.
 */

#include <stdio.h>

/* Constants */

#define ENDVALUE 50

/* Main program */

int main (void) {
   int celsius;
   float fahren;

   /* Display  the heading lines */
   printf("DEGREES  DEGREES\n");
   printf("CELSIUS  FAHRENHEIT\n");
   printf("-------  ----------\n");
   
   celsius = 5; /* starting Celsius value */

   while (celsius <= ENDVALUE) {
      fahren = (9.0 /5.0) * celsius + 32.0;
      printf("%5d%11.2f\n", celsius, fahren);
      celsius = celsius + 5;
   }
   return 0; 
}

