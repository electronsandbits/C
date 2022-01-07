/*
 * File: stressStrain.c 
 * --------------------
 * This program compute the stress and strain in steel 
 * columns subject to compression loads varying from 10,000
 * pounds to 100,000 pounds in increments of 10,000 pounds.
 */


#include <stdio.h>


/* Constants */

#define SIZE 10

const float PI = 3.141593;
const float E = 30E06;

/* Main program */


int main() {
   int i;   
   float diameter, area, load, stress[SIZE], strain[SIZE] ;

   printf("Enter the diameter(inches):");
   scanf("%f", &diameter);

   area = PI * (diameter * diameter ) / 4.0;
   load = 10000.00;

   for (i = 0; i < SIZE; i++) {
      stress[i] = load / area;
      strain[i] = stress[i] / E;
      load += 10000.00;
   }
  
   printf("\nColumn diameter:%6.2f\n", diameter);
   printf("  index      compload     stress       strain\n");

   load  = 10000.00;
   for (i = 0; i < SIZE; i++) {
      printf("  %d.   %10.2f  %9.2f   %12.8f\n", i, load, stress[i], strain[i]);
      load += 10000.00;  
   }
 
   return 0;


}
