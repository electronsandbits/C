/*
 * File:slope.c
 * ------------
 * This program calculates the slope of a line. To calculate the slope
 * of the line, the coordinate, the values of the two end points of the 
 * line, must be known.This program inputs the coordinate values for
 * the two end poitns of the line. The value computed for the slope of 
 * the line is printed. The output shows the input coordinate end points   
 * and the calculated value for the slope.
 *
 * Input variables
 *
 * x1, y1 - coordinates of point1
 * x2, y2 - coordinates of point2
 *
 * Computed Variables:
 *
 * slope - slope of the line
 *
 * Output Variables
 *
 * x1, y1 - coordinates of point1
 * x2, y2 - coordinates of point2
 * slope - slope of the line
 */ 

#include <stdio.h> 

int main() {
   float x1, y1, x2, y2;
   float slope;
   printf("Calculation of a slope of the line.\n");
   printf("Input the Coordinate Points of the Line: \n");
   scanf("%f  %f  %f  %f", &x1, &y1, &x2, &y2);

   printf("Coordinates of Point1: x1 = %5.2f  y1 = %5.2f\n", x1, y1);
   printf("Coordinates of Point2: x2 = %5.2f  y2 = %5.2f\n", x2, y2);

   if  (x1 != x2)  {
      slope = (y2 - y1) / (x2- x1);
      printf("Slope pf the line: %5.2f\n", slope);
   } else {
      printf("line is vertical\n");
   }

   return 0;
}



