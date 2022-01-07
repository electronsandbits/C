/*
 * File: slope.c 
 * -------------
 * This program calculates the slope of a line.
 * To calculate the slope of the line, the coordinate,
 * the values of the two end points of the line, must be known.
 * The user is prompted to input the coordinates values for the two
 * end points of the line. The value computed for the slope of the line 
 * is printed. The output shows the input coordinate end points 
 * and the calculated value for the  slope.
 */

#include <stdio.h>

int main(void) {
   float x1, y1, x2, y2;
   float slope;

   printf("Input the Coordinates Points of the Line:\n");
   scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

   printf("Coordinates of Point1: x1 = %5.2f y1 = %5.2f\n", x1, y1);
   printf("Coordinates of Point2: x2 = %5.2f y2 = %5.2f\n", x2, y2);

   if  (x1 != x2) {
      slope = (y2- y1) / (x2- x1);
      printf("Slope of the Line: %5.2f\n", slope);
   } else {
      printf("Line is vertical\n");
   }


   return 0;
}

