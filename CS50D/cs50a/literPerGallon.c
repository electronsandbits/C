/* 
 * File: literPerGallon.c 
 * ----------------------
 * This program converts gallon to liters.
 * The program prints the table starting from 10
 * to 20 gallons in 1-gallon increment.
 */

#include <stdio.h>

/* Constants */

#define LITERPERGALLON 3.785

/* Main program */

int main (void) {
   int gallon;
   double liter;
   
   
   printf("This program converts gallon to litters.\n");
   printf("GALLONS LITERS\n");
   printf("------- ------\n");

   gallon = 10;
   while (gallon <= 20)  {
      liter = gallon * LITERPERGALLON;
      printf("%3d %11.2f\n", gallon, liter);
      gallon += 1;
   }
   return 0;
}
