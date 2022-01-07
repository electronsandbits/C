/*
 * File: mininum.c 
 * ---------------
 * This program computes the minimum of two integers.
 */


#include <stdio.h>

/* Function prototypes */

int min (int a, int b);


/* Main program */

int  main () {
    int j, k, minimum;
   
    printf("Input two integers:  ");
    scanf("%d %d", &j, &k);

    minimum = min(j, k);  /* call the function */
    printf("\nOf the two values %d and  %d, " 
             " the mininum is %d.\n\n", j, k, minimum);

    return 0;
}


/* 
 * Function: min
 * Usage: int min(j, k);
 * ---------------------
 * Returns the minimum of two integers
 */

int min (int a, int b) {

  if  (a < b) {
     return a;
  } else {
     return b;
  }
}
