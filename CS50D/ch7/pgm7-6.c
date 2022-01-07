/*
 * File:pgm7-6.c 
 * --------------
 * This program illustrates passing an address to a function.
 */

#include <stdio.h>


/* Function prototypes */

void newval(float *); 


/* Main program */

int main()  {
   float testval;

   printf("\nEnter a number:");
   scanf("%f", &testval);

   printf("The address that will be passed is %u\n\n", &testval);


   newval (&testval); /* Function's call */

   return 0;
}


/* 
 * Function: newval
 * Usage: newval(&testVal)
 * -----------------------
 * Returns  the adress and the value pointed to.
 */

void newval(float *xnum) {
   printf("The address received is %u\n", xnum);
   printf("The value pointed to by xnum is:  %5.2f \n", *xnum) ;
}
