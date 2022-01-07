/*
 * File:findMax2.c 
 * --------------
 * This program  determines the maximun 
 * number given two numbers.
 * This version illustrates  returning a value from
 * a function.
 */

#include <stdio.h>


/* Function prototypes */

void findMax(float, float);

/* Main program */

int main(void) {
   float firstnum, secnum, max;
  
   printf("Enter a number: ");
   scanf("%f", &firstnum);
   printf("Great! Please enter a second number: ");
   scanf("%f", &secnum);

   max = findMax(firstnum, secnum); /* Function's call */

   return 0;

}
