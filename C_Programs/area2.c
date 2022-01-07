/*
 * File:area2.c
 * ------------
 * This program reads in the radius of a circle,
 * calculates its area and then writes the calculated
 * result. This version of the program implements a procedure 
 * that returns a calculated result.
 */


#include <stdio.h>

/* Function prototypes */

float process (float radius);

/* Constants */

#define PI 3.14159

int main (void) {
   float radius, area;

   printf("Please enter a radius:");
   scanf("%f", &radius);
   area = process(radius);  /* Function call */
   printf("Area = %f\n", area);
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
