/* 
 * File: pgm6-4.c 
 * --------------
 * This program return the maximum values of the two numbers passed to it.
 * but now with a return stament.
 */
 
#include <stdio.h>

/* Function prototypes */

 float findMax(float, float); 

/* The Main Program */

int main() {

   float firstNum, secNum, max;

   printf("\nEnter a number: ");
   scanf("%f", &firstNum);
   printf("Great! Please enter a second number: ");
   scanf("%f", &secNum);

   max = findMax(firstNum, secNum); 
   printf("\nThe maximum of the two numbers is %f\n", max);

   return 0;
}

/*
 * Function: findmax
 * Usage: 
 * -----------------
 * Returns the maximun value. 
 */

float findMax(float x, float y) {      
    float maxnum;     
    
    if  (x >= y)  {    
       maxnum = x;
    } else {
       maxnum = y;

       return (maxnum);
    }

}	
