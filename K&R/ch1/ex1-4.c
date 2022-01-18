/*
 * File:Exercise1-4.c 
 * ------------------
 * This program prints the corresponding
 * Celsius to Fahrenheit table.
 */

#include <stdio.h>

int main()
{
   float fahr, celsius;
   int lower, upper, step;

   lower = 0;     /* lower limit of temperature table */
   upper = 300;   /* upper limit */
   step = 20;     /* step size */

   printf("DEGREES DEGREES\n");
   printf("CELSIUS FAHREN\n");
   printf("------- ------\n");

   celsius = lower;
   while (celsius <= upper) {
      fahr = (9.0 / 5.0) * celsius + 32.0;
      printf("%3.0f\t%6.1f\n", fahr, celsius);
      celsius = celsius + step;
   }

   return 0;
}
