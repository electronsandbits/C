/*
 * File: pgm3-7.c 
 * --------------
 * This program illustrates simple interactive input.
 */

#include <stdio.h>


int main() {

   float num1, num2, product;
   num1 = 300.0;
   num2 = .05;

   product = num1 * num2;
   printf("%f times %f is %f\n", num1, num2, product);
  
   return 0;

} 
