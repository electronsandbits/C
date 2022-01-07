/*
 * File: prog3.c 
 * -------------
 * This program calculates and displays the area 
 * of the rectangle.
 */


#include <stdio.h>

int main() {
   float length, width, area;

   width = 3.5;
   length = 5.48;

   area = length * width;

   printf("The area of the rectangle is %f\n", area);

   return 0;
}

