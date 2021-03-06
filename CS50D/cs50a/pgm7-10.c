/* 
 * File: pgm7-10.c
 * ---------------
 *
 */

#include <stdio.h>

/* Function prototypes */

void swap(float *, float *); 

/* Main program*/

int main() {

   float firstnum, secnum;

   printf("Enter two numbers: ");
   scanf("%f %f", &firstnum, &secnum);

   printf("\nBefore the call to swap():\n");
   printf("  The value in firtsnum is %5.2f\n", firstnum);
   printf("  The value in secnum is %5.2f\n", secnum);

   swap(&firstnum, &secnum); /* call swap() */

   printf("\nAfter the call to swap():\n");
   printf("  The value in firstnum is %5.2f\n", firstnum);
   printf("  The value in secnum is %5.2f\n", secnum);
  
  return 0;
}

/*
 * Function: swap ();
 * ------------------
 *
 */

void swap(float *num1Addr, float *num2Addr) {
  float temp;

  temp = *num1Addr; /* save firstnum's value */
  *num1Addr = *num2Addr; /* move secnum's value into firstnum */
  *num2Addr = temp; /* change secnum's value */
}
