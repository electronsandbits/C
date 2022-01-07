/*
 * File:swap.c 
 * -----------
 * This program exchanges the values in two single-precision
 * variables of its called function. Thus, if the function has access
 * to two variables of its calling function, the called function should switch
 * the values in these variables.
 */


#include <stdio.h>


/* Function prototypes */

void swap (float *, float *);


/* Main program */

int main () {
   float firstnum = 20.0, secnum = 5.0; 
  
   swap(&firstnum, &secnum);
  
   return 0;
} 

/*
 * Function:swap
 * Usage: swap(&firstnum, &secnum);
 * --------------------------------
 * 
