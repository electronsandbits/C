/*
 * File: findAbs.c 
 * ---------------
 * This program computes the absolute value of a number.
 */

#include <stdio.h>

/* Function prototypes */

int findAbs(int n );


/* Main program */

int main () {
   int number;
   
   printf("Please enter a number:");
   scanf(" %d",  &number);
  
   findAbs(number);  /* Function's call */

   return 0;
}


/*
 * Function:findAbs
 * Usage: abs = findAbs()
 * ----------------------
 * Returns the absolute value of a number.
 */

int findAbs(int n) {
    
    if  (n < 0 ) {
       return -n;
    } else {
       return n;
    }
    // printf("\nThe absolute value  of %d , is %d\n", x);

    
}
