/*
 * File:findMax.c 
 * --------------
 * This program prompts the user to input two floating numbers, and then
 * determines the maximun  of the two  entered numbers.
 */

#include <stdio.h>

/* Function prototypes */

void findMax(float, float);

/* Main program */

int main() {
   float firstNum, secNum;
  
   printf("Enter a number: ");
   scanf("%f", &firstNum);
   printf("Great! Please enter a second number: ");
   scanf("%f", &secNum);

   findMax(firstNum, secNum);   /* Function's call */

   return 0;
}

/* 
 * Function: findMax 
 * Usage: maxnum = findMax(x, y);
 * ------------------------------
 * Returns the maximun of two numbers.
 */

void findMax (float x, float y) {
   float maxNum;
   
   if  (x >= y ) {         /* Find the  maximun number */ 
      maxNum = x;
   } else {
      maxNum = y;
   }  
   printf("\nThe maximum of the numbers entered is %f\n", maxNum);
}






