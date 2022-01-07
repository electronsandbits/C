/*
 * File: prog2.c 
 * -------------
 * This program calculates and display 
 * the area of the cirlce.
 */


#include <stdio.h>


/* Constants */

#define  PI 3.14159265358979323846


/* Main Program */

int main() {
   float radius, area;

  
   radius  = 2.57;
   area  = PI * radius * radius;
   printf("The area of the circle is %f\n", area);


   return 0;

}
