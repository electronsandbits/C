/*
 * File:fahr3.c 
 * ------------
 * This program prints  Fahrenheit-Celsius table
 * using a for loop, this time using constants.
 */

#include <stdio.h>

/* Constants */

#define LOWER 0      /* lower limit of table */
#define UPPER 300    /* upper limit */
#define STEP 20      /* step lize */


/* Main program */

int main(void)
{
   int fahr;

   printf("DEGREES EGREES\n");
   printf("FAHREN  CELSIUS\n");
   printf("------  ------\n");

   for (fahr = LOWER; fahr <= UPPER; fahr = fahr +  STEP) {
      printf("%3d %6.1f\n", fahr, (5.0 /9.0)* (fahr - 32));
   }

   return 0;
}
