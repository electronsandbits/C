/* 
 * File:pgm5-4.c 
 * ---------------
 * This program prints the Celsius-To-Fahrenheit temperature conversion
 * table. Assuming that Fahrenheit temperatures corresponding to Celsius 
 * temperatures range from 5 to 100 degrees in increment of 5 degrees.
 */

#include <stdio.h>
#define ENDVALUE 100


int main() {
   int celsius;
   float  fahren;

/* display the heading lines*/

   printf("DEGREES DEGREES\n");
   printf("CELSIUS FAHRENHEIT\n");
   printf("------- ----------\n");

   celsius = 0; 
   while (celsius <= ENDVALUE) {
      fahren = (9.0/5.0) * celsius + 32.0;
      printf("%5d%11.2f\n", celsius, fahren);
      celsius = celsius + 5;
   }
   return 0;
}
