/*
 * File: Circumference.c
 * This program calculates and display 
 * the circumference of a circule.
 */


#include <stdio.h>

/* Constants */

#define PI 3.14159265358979323846


/* Main program */

int main() {
   float circumference, radius;
 
   radius  = 2.75;

   circumference = 2 * radius * PI;

   printf("The circumference of the circle is %f\n", circumference );

   return 0;
}
 
