/* 
 * File: distance.c 
 * ----------------
 * This program calculates the distance between two  points.
 */

#include <stdio.h>
#include <math.h>


int main () {
   
  /* Declare and initialize variables */

   double x1 = 1, y1 = 5, x2 = 4, y2 = 7;
   double side_1, side_2, distance;

  /* Compute the side of a right triangle */

   side_1 = x2 - x1;
   side_2 = y2 - y1;
   distance = sqrt(side_1 * side_1 + side_2 * side_2);

  /* Print distance */

   printf("The distance between the two points is" " %5.2f\n", distance);
  
   return 0; 
}




