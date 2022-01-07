/*
 * File:pgm7-7.c 
 * --------------
 * This program illustrates passing an address to a function.
 */

#include <stdio.h>


/* Function prototypes */

void newVal(float *); 


/* Main program */

int main()  {
   float testVal;

   printf("\nEnter a number:");
   scanf("%f", &testVal);

   printf("\nFrom main(): The value in testVal is: %5.2f\n", testVal);

   newVal (&testVal); /* Function's call */

   printf("\nFrom main(): The value in testVal has been changed to: %5.2f\n", testVal);
  
   return 0;
}


/* 
 * Function: newVal
 * Usage: newVal(&testVal)
 * -----------------------
 * Returns  the adress.
 */

void newVal(float *xnum) {
    
   printf("\nFrom newVal(): The value pointed to by xnum is  %5.2f \n", *xnum);
  
   *xnum = *xnum + 20.2 ;

}
