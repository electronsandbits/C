/* 
 * File: feetToMeters.c 
 * ----------------------
 * This program converts feet to meters.
 * The program prints the table starting from 3
 * to 30  in 3-foot increment.
 */

#include <stdio.h>

/* Constants */

#define FEETPERMETERS 0.3048

/* Main program */

int main (void) {
   int feet;
   double  meter;
   
   
   printf("This program converts feet to meters.\n");
   printf("FEET METERS\n");
   printf("---- ------\n");

   feet = 3;
   while (feet <= 30)  {
      meter = feet * FEETPERMETERS;
      printf("%3d %6f ",feet, meter);
      feet = feet + 3;
   }
   return 0;
}
