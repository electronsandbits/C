/*
 * File: mult.c
 * ------------
 * This program calculates the product of 
 * two numbers entered by the user.
 */

#include <stdio.h>


/* Function prototypes */

void mult(float x, float y) ;


/* Main program */

int main() {
   float num1, num2;

   printf("Enter the two numbers: ");
   scanf("%f %f", &num1, &num2);

   mult(num1, num2);  /* Function's call */

   return 0;
}

/* 
 * Function: mult
 * Usage: product =  a * b;
 * ------------------------
 * Returns the product of a and b.
 */

void mult(float a, float b) {
   float product;

   product = a * b;

   printf("The product of the two entered numbers is %f\n", product);
} 
