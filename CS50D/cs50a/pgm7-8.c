/*
 * File: pgm7-7.c 
 * --------------
 */

#include <stdio.h>

 /*Function  prototypes */

  void calc(float, float, float, float *, float *); 
  
/* Main program */

int main() {

   float firstnum, secnum, thirdnum, sum, product;

   printf("Enter three numbers: ");
   scanf("%f %f %f", &firstnum, &secnum, &thirdnum);

   calc(firstnum, secnum, thirdnum, &sum,  &product); /*Function call */

   printf("\nThe sum of the entered numbers is: %6.2f" , sum );
   printf("\nThe product of the entered numbers is: %6.2f\n" , product);

   return 0;
}

/*
 * Function: calc();
 * ----------------
 */

void calc(float num1, float num2, float num3, float *sumaddr, float *prodaddr){
  *sumaddr = num1 + num2 + num3;
  *prodaddr = num1 * num2 * num3;
}
