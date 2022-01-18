/*
 * File:Exercise1-5.c 
 * ------------------
 * This program prints  Fahrenheit-Celsius table
 * using a for loop, but in reverse order.
 */

#include <stdio.h>


int main(void)
{
   int fahr;

   printf("DEGREES EGREES\n");
   printf("FAHREN  CELSIUS\n");
   printf("------  ------\n");

   for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
      printf("%3d %6.1f\n", fahr, (5.0 /9.0)* (fahr - 32));
   }
   return 0;
}
