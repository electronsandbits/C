/*
 * File:reynolds.c
 * ---------------
 * This program compute and build a table of the Reynolds 
 * numbers at flow velocities varying from 100 t0 1000 ft/s at
 * increments of 100.
 */


#include <stdio.h>


/* Constants */

#define ARSIZE 10
const float density = 2.33E-03;
const float viscosity = 3.8E-07;


/* Main program */

int main() {
   int i;
   float length;
   float velocity, reynoldsNum[ARSIZE];

   printf("Input the diameter of cylinder as lenght in ft:");
   scanf("%f", &length);

   velocity = 100.00;
   i = 0;  /* index */
   while (velocity <= 1000) {
      reynoldsNum[i] = (density * velocity * length) / viscosity;
      velocity = velocity + 100;
      i++;
   }
   /* print the table */
   printf("\n\nindex   velocity   Reynolds number\n");
   velocity = 100.00;

   for (i = 0; i < ARSIZE; i++) {
      printf("%5d   %8.2f  %14.2f\n", i + 1, velocity, reynoldsNum[i]);
      velocity += 100;
  }

  return 0;
}
