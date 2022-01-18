/*
 * File:inchesToCm.c
 * -----------------
 * This program converts inches to centimeters.
 */

#include <stdio.h>

/* Constants */

# define CENTIMETERS_PER_INCH 2.54

/* Main program */

int main() {
   printf("This program converts inches to centimeters.\n");
   float inches, cm;

   printf("Enter value in inches: ");
   scanf("%f", &inches);
   cm = inches * CENTIMETERS_PER_INCH;
   
   printf("cm = %f\n", cm );

   return 0;
}
