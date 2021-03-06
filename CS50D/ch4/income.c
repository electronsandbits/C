/*
 * File: income.c 
 * --------------
 * This program computes the income tax for NJ state
 * residents.
 */

#include <stdio.h>

/* Constants */

#define  LOWRATE  0.02
#define  HIGHRATE 0.025
#define  CUTOFF   20000.0
#define  FIXEDAMT 400


int main() {
   float taxable, taxes; 

   printf("Please type in the taxable income: ");
   scanf("%f", &taxable);


   if  (taxable <= CUTOFF) {
      taxes = LOWRATE * taxable;
   } else {
      taxes = HIGHRATE * (taxable - CUTOFF) + FIXEDAMT;
   }

   printf("Taxes are $%7.2f\n", taxes);


   return 0;

}
