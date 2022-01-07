/*
 * File:area4.c
 * -----------
 * This program reads in the radius of a circle,
 * calculates its area and then writes the calculated
 * result. This version of the program implements a procedure 
 * that returns a calculated result.
 * This one include the error correction routine, which tests to see if
 * the value of the radius is less than zero.
 * This program  expands from the previous ones and calculate the 
 * area of several circles. Uses sentinel to stop.
 */


#include <stdio.h>

/* Function prototypes */

float process (float radius);

/* Constants */

#define PI 3.14159

/* Main program */

int main (void) {
   float radius, area;
   int count;   

   printf("TO STOP, enter 0 for the radius!\n");
   printf("\nRadius = ?" );
   scanf("%f", &radius); 
   
   for (count = 1; radius != 0; ++count) {
      if  (radius < 0 ) {
         area = 0;
      } else {
         area = process (radius); /* Function call */
      }
      printf("Area = %f\n", area);
      printf("\nRadius = ?" );
      scanf("%f", &radius); 
   }
   return 0;
}

/* 
 * Function: process
 * Usage:  area = process (radius)
 * -------------------------------
 * Returns the calculated area.
 */

float process(float r )  {
  float areaCircle ;
 
  areaCircle = PI * r * r;
  return (areaCircle) ;

}
