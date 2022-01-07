/*
 * File: circle.c
 * --------------
 * For a user-supplied value of the radius, calculate the area and
 * circumference of a circle.
 */

#include <stdio.h>

/* constants */

#define PI 3.14159

/* Main program */

int main() {
   printf("This program calculate the area and circumference of a circle.\n");

   double radius,        /* input  - radius of a cirlce, cm */
          area,          /* output - area of a circle, cm^2 */
	  circumference; /* output - circumference of a circle, cm */

   /* Get the radius */
   printf("Enter the radius in cm:  ");
   scanf("%lf", &radius);

   /* Calculate the area and circumference. */
   area = PI * radius * radius;
   circumference = 2.0 * PI * radius;

   /* Display the output. */

   printf("The area is %lf cm^2. \n", area);
   printf("The circumference is %lf cm.\n", circumference);

   return 0;

}
