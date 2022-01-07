/*
 * File: hypotenuse.c
 * ------------------
 * This program computes the hypotenuse
 * of a right triangle, by asking the user to 
 * enter the sides of the triangle.
 */


#include <stdio.h>
#include <math.h>


/* Function prototypes */

void hypotenuse (float a, float b);


/* Main program */

int main() {
   float side1, side2;
  
   printf("Enter the lenghts of two sides: ");
   scanf(" %f %f", &side1, &side2);
  
   hypotenuse(side1, side2); /* Function's call */

   return 0;
}

/*
 * Function: hypotenuse
 * Usage: float h = hypotenuse(x, y);
 * --------------------------------
 * Returns the hypotenuse of a right triangle.
 */

void hypotenuse(float x, float y) {
   float c;
  
   c = sqrt((x * x) +(y * y));
   printf("The hypotenuse is c = %f\n", c);

}


  
