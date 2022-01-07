/*
 * File:exercise5. c
 * -----------------
 * This program print the table in reverse order,
 * that is, from 300 degress to 0.
 */

#include <stdio.h>

int main() {
   printf("print Fahrenheit-Celsius table in reverse order.\n");

   int fahr;
   printf("DEGREES EGREES\n");
   printf("FAHREN  CELSIUS\n");
   printf("------  ------\n");

   for (fahr = 300; fahr >= 0; fahr = fahr -20) {
      printf("%3d %6.1f\n", fahr, (5.0 /9.0 ) * (fahr - 32));
   }
  
   return 0; 

}
