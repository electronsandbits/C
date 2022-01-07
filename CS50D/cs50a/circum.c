/*
 * File:circum.c
 * .............
 * This program calculates the circumference
 * of a circle given its radius.
 */

#include <stdio.h>

int main ()
{
   float radius, circumference;  /* declare an input and output item */

   radius = 2.0 ;     /* set a value fot the radius */
   circumference = 2.0 * 3.1416 * radius;  /* calculate the circumference */
   printf("The circumference of the circle is %f\n", circumference);

   return 0; 
}
