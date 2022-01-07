/*
 * File:fractions.c
 * ----------------
 * This programs asks the user to enter two fractions 
 * and then computes their sum.
 */

#include <stdio.h>

int main (void) {
   int num1, den1, num2, den2, resultNum, resultDen;
   
   printf("Enter first fraction: ");
   scanf("%d/%d", &num1, &den1);
    
   printf("Enter second fraction: ");
   scanf("%d/%d", &num2, &den2);

   resultNum = num1 * den2 + num2 * den1;
   resultDen = den1 * den2;
   printf("The sum is %d/%d\n", resultNum, resultDen);

   return 0;

}
