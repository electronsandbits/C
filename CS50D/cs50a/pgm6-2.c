/*
 * File: Pgm6-1.c
 * --------------
 * This program return the maximum 
 * value of two numbers passed to it.
 */

#include <stdio.h>

/* Function prototypes */

void findMax(float, float); 

/* The Main Program */

int main() {
   float firstnum, secnum;

   printf("Enter a number: ");
   scanf("%f", &firstnum);
   printf("Great! Please enter a second number: ");
   scanf("%f", &secnum);

   findMax(firstnum, secnum);   /* Function's  call */ 

   return 0;
}

/*
 * Function:findMax
 * Usage: findMax(float, float y)
 * ------------------------------
 * Returns the maximum value.
 */

void findMax(float x, float y) { 
    float maxnum;

    if  (x >= y) {  /* Find the maximum number */
       maxnum = x;
    } else {
       maxnum = y;
    }  
    printf("\nThe maximum of the two numbers entered is %f\n", maxnum);
} 
