/*
 * File: eqns.c 
 * ------------
 * This program  computes a solution
 * to a Set of Simultaneous Equations.
 */


#include <stdio.h>

int main() {
   float a, b, c, d, e, f;
   float den, x, y; 
 
   printf("Enter the values of the constants:\n");
   scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

   printf("\nGiven: ");
   printf("a = %4.2f b = %4.2f c = %4.2f d = %4.2f e =%4.2f");
   printf(" f = %4.2f\n", a, b, c, d, e, f);
    
   den = a * e  - b * d;
   if (den != 0.0) {
     x = (c * e - b * f) / den ;
     y = (a * f - c * d ) / den;
     printf("x = %4.2f  y = %5.2f\n", x, y);
   }
  
   return 0;
} 
