/*
 * File:pgm2-1.c 
 * -------------
 * This program computes a value for the 
 * circumference of a circle.
 */

#include <stdio.h>


int main(void) {
   float radius, circumference;

   radius = 2.0;
   circumference = 2.0 * 3.1416 * radius;

   printf("The circumference of the circle is %f\n", circumference);

   return 0;

} 
