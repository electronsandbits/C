/*
 * File: cel2fahr.c
 * ----------------
 * This program to convert Celsius to Fahrenheit.
 */

#include <stdio.h>

/* Constants */

#define  ENDVALUE 144

/* Main program */

int main() {
   int celsius;
   float fahren;

   /* display the heading lines */
   printf("DEGREES  DEGREES\n");
   printf("CELSIUS  FAHRENHEIT\n");
   printf("-------  ----------\n");

   /* Now fill in the table using a while loop */
   celsius = 5;
   while (celsius <= ENDVALUE) {
      fahren = (9.0 / 5.0) * celsius + 32.0;
      printf("%5d%11.2f\n", celsius, fahren);
      celsius = celsius + 5;
   }

   return 0;
}

