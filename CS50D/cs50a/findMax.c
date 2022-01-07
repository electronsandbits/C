/*
 * File: findMax.c
 * ---------------
 * This program determines the maximum number.
 * The program asks the user to input two numbers, then 
 * decides which one is the maximum.
 */

#include <stdio.h>


/* Function prototypes */

void findMax (float, float);

/* Main program */

int main () {
   float firstNum, secondNum;

   printf("This program determines the maximum number.\n");
   printf("Enter the first number: ");
   scanf("%f", &firstNum);
   printf("Great! Please enter the second number: ");
   scanf("%f", &secondNum);

   findMax(firstNum, secondNum);  /* Function call */
  
   return 0;
}

/*
 * Function:findMax ()
 * Usage: 
 * -------------------
 * Return the maximun number.
 */



void findMax (float x, float y) {
   float maxNum;

   if  (x >= y ) {
      maxNum = x;
   } else {
      maxNum = y;
   }
   printf("The maximum of the two numbers entered is %f\n", maxNum);
}
