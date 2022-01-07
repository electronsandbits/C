/*
 * File: findMax.c 
 * ---------------
 * This program find the maxinum of two numbers.
 */


#include <stdio.h>


/* Function Prototypes */

void findMax(float, float);

/* Main program */

int main () {
   float firstNumber, secondNumber;
  
   printf("Enter a number : ");
   scanf("%f", &firstNumber);
   printf("Great! please enter a second number: ");
   scanf("%f", &secondNumber);

   findMax (firstNumber, secondNumber); /* Calling function */

   return 0;
}

/* 
 * Function: findMax
 * Usage: findMax(x, y);
 * ---------------------
 * Returns the maximun number.
 */

void findMax (float x, float y) {
   float maxNumber;
 
   if  ( x >= y)  {
      maxNumber = x;
   } else {
      maxNumber = y;
   }
   printf("\nThe maximum of the two numbers entered is %f\n", maxNumber);
}

