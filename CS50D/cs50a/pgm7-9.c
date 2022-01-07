/*
 * File:pgm7-9.c 
 * -------------
 * This program illustrates swapping values.
 */

#include <stdio.h>

/* Function prototypes */

void swap(float *, float *);

/* Main Program */

int main() {

   float firstnum = 12.0, secnum = 7.0;

   swap(&firstnum, &secnum);

   return 0;
}

/* 
 * Function: swap();
 * -----------------
 * Swaps the values between variables.
 */

void swap(float *num1Addr, float *num2Addr) {

  printf("The number pointed to by num1Addr is %5.2f\n", *num1Addr);
  printf("The number pointed to by num2Addr is %5.2f\n", *num2Addr);
}
