/*
 * File: pgm6-1.c 
 * --------------
 * This program determines the maximum of two
 * entered numbers by the user.
 */
 
#include <stdio.h>

/* Function prototypes */

void findMax(float , float ); 

/* Main Program */

int main() {
    
   float firstNum, secNum;

   printf("Enter a number: ");
   scanf("%f", &firstNum);
   printf("Great! Please enter a second number: ");
   scanf("%f", &secNum);

   findMax(firstNum, secNum); /* The function is called here */   

   return 0;
}

/*  
 * Function: findMax
 * Usage: 
 * -----------------
 * Returns the  maximum  of two numbers.
 */

void findMax(float x, float y) {   
   float maxnum;

   if  (x >= y) {
      maxnum = x;
   } else {
      maxnum = y;
   }
   printf("\nThe maximum of the two numbers entered is %f\n", maxnum);
}
