/* 
 * File: area6.c 
 * -------------
 * This program calculates the areas of circles, 
 * using a while loop. The number of circlces is unspecified.
 */

#include <stdio.h>


/* Constants */

#define PI 3.14159

/* Function prototypes */

float process (float radius);


/* Main program */

int main (void) {
  float radius, area;

  printf("To STOP, enter 0  for the radius!\n");
  printf ("\nPlease enter the radius: ");
  scanf("%f" , &radius);

  while (radius != 0 ) {
     if  (radius < 0 ) {
        area  = 0; 
     } else {
       area = process (radius);
     }
     printf("Area  = %f\n", area);
     printf("\nRadius = ? ");
     scanf("%f", &radius);
  }
 
}


/* 
 * Function: process
 * Usage  = process (float radius)
 * -------------------------------
 * Returns the calculated area.
 */

float process (float r) {
  float areaCircle;
  areaCircle = PI * r * r;
  return (areaCircle);
}
