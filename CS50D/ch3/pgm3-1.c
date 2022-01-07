/*
 * File:pgm3-1.c 
 * -------------
 * This program illustrates the use 
 * of assignmente statement in calculating the area 
 * of a rectangle.
 */


#include <stdio.h>

int main(void) 
{
   float length, width, area;

   length = 27.2;
   width = 13.8;
   area = length * width;

   printf("The length of the rectangle is %f", length);
   printf("\nThe width of the rectangle is %f", width);
   printf("\nThe area of the rectangle is %f\n", area);

   return 0;
}
