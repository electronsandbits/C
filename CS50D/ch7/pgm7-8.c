/*
 * File: pgm7-8.c 
 * --------------
 * This program  accept three values, computes 
 * their sum and product and return the computed results.
 */

#include <stdio.h>

/* Function prototypes */

void calc(float, float, float, float *, float *);

/* Main program */

int main() { 
   float firstNum, secNum, thirdNum, sum , product;
   
   printf("Enter the numbers:");
   scanf(" %f %f %f", &firstNum, &secNum, &thirdNum);

   calc(firstNum, secNum, thirdNum, &sum, &product); /* Function's call */

   printf("\nThe sum of the entered numbers is: %6.2f", sum);
   printf("\nThe product of the entered numbers is: %6.2f\n", product);

   return 0;
}

/*
 * Function: calc()
 * Usage: sumProduct = calc(float, float, float);
 * ----------------------------------------------
 * Returns the sum and product of the entered numbers.
 */

void calc(float num1, float num2, float num3, float *sumAddr, float *prodAddr) {

   *sumAddr = num1 + num2 + num3;
   *prodAddr = num1 * num2 * num3;
}

  
