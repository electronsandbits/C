/*
 * File:area.c
 * -----------
 * This program compute the area of a 
 * scalene triangle given the sides of the triangle.
 */

#include <stdio.h>
#include <math.h>

int main() {
   int a, b, c;
   float s, area;

   printf("Input integer values for the Sides:\n");
   scanf("%d     %d     %d", &a, &b, &c);
   printf("\nThe sides of the triangle: %d  %d  %d\n", a, b, c);

   if  (a > 0 && b > 0 && c > 0) {
     s = (a + b + c ) / 2.0;
     if (s > a && s > b && s > c ) {
       area = sqrt(s * (s - a) * (s - b) * (s - c));
       printf("The area of the triangle: %5.2f\n", area);
     }
   }
   
   return 0;
}
