/*
 * File:fahr1.c 
 * -----------
 * This program uses the formula C = (5/9) (F-32)  
 * to print the table of Fahrenheit temperatures
 * and their Celsius equivalents.
 * Prints Fahrenheit -Celsius table for 
 * fahr = 0, 20, ..., 300.
 * This file is a floating-point version.
 */

#include <stdio.h>

int main()
{
   float fahr, celsius;
   int lower, upper, step;

   lower = 0;     /* lower limit of temperature table */
   upper = 300;   /* upper limit */
   step = 20;     /* step size */

   printf("Fahr Celsius\n");
   printf("---- -------\n");

   fahr = lower;
   while (fahr <= upper) {
      celsius = (5.0 / 9.0) * (fahr - 32.0);
      printf("%3.0f %6.1f\n", fahr, celsius);
      fahr = fahr + step;
   }
}
