/* 
 * File:prog5-2.c 
 * ---------------
 * This program prints the Celsius-To-Fahrenheit temperature conversion
 * table. Assuming that Fahrenheit temperatures corresponding to Celsius 
 * temperatures range from -10 to 60 degrees in increment of 10 degrees.
 */

#include <stdio.h>

/* Constants */

#define ENDVALUE 60

/* Main program */

int main() {
   int celsius;
   float  fahren;

/* display the heading lines*/

   printf("DEGREES DEGREES\n");
   printf("CELSIUS FAHRENHEIT\n");
   printf("------- ----------\n");

   celsius = -10; 
   while (celsius <= ENDVALUE) {
      fahren = (9.0/5.0) * celsius + 32.0;
      printf("%5d%11.2f\n", celsius, fahren);
      celsius = celsius + 10;
   }
   return 0;
}
