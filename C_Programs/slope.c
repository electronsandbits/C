/*
 * File:slope.c 
 * ------------
 * This program computes the slope a line  given the data 
 * for coordinate of the end points of the line. 
 * The user is required to input the coordinates of both  points.
 */


#include <stdio.h>
int main () {
   float x1, y1, x2, y2;
   float slope;

   printf("Input the Coordinate Points of the Line:\n");
   scanf("%f %f %f %f", &x1, &y1, &x2,&y2);

   printf("Coordinate of Point1:x1 = %5.2f  y1 = %5.2f\n",x1,y1);
    
   printf("Coordinate of Point2:x2 = %5.2f  y2 = %5.2f\n",x2, y2);

   if (x1!= x2) {
     slope = (y2-y1) / (x2-x1);
     printf("Slope of the line: %5.2f\n", slope);
   }else {
     printf("Line is vertial\n");
   }

   return 0;
}
