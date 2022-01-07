/*
 * File:area.c
 * -----------
 * This program reads in the radius of a circle,
 * calculates its area and then writes the calculated
 * result.
 */

#include <stdio.h>

int main () {
   float  radius, area;
  
   printf("Please enter the radius = ?");
   scanf("%f", &radius);
   area = 3.14159 * radius * radius;
   printf("Area = %f\n", area);


}
