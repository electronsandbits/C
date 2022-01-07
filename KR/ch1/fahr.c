/*
 * File:fahr.c 
 * -----------
 * This program uses the formula C = (5/9) (F-32)  
 * to print the table of Fahrenheit temperatures
 * and their Celsius equivalents.
 * Prints Fahrenheit -Celsius table for 
 * fahr = 0, 20, ..., 300.
 */

#include <stdio.h>

int main() {
   int fahr, celsius;
   int lower, upper, step;

   lower = 0;     /* lower limit of temperature table */
   upper = 300;   /* upper limit */
   step = 20;     /* step size */

   printf("Fahr Celsius\n");
   printf("---- -------\n");

   fahr = lower;
   while (fahr <= upper) {
      celsius = 5 * (fahr -32) / 9;
      printf("%2d\t%4d\n", fahr, celsius);
      fahr = fahr + step;
   }
   return 0;
}
