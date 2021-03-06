/*
 * File:pgm4-2.c
 * .............
 * This program calculate the income tax of NJ state.
 * NJ income tax is assessed at 2 percent of 
 * taxable income for incomes less than or equal to $20,000.
 * For taxable income greather than $ 20,000, state taxes are 2.5 percent
 * of the income that exceeds $ 20,000 plus a fixed amount of $400(which is 2% of $20,000). 
 */ 
 
#include <stdio.h>

/* Contants */

#define LOWRATE 0.02   /* lower tax rate */
#define HIGHRATE 0.025 /* higher tax rate */
#define CUTOFF 20000.0 /* cut off for low rate */
#define FIXEDAMT 400   /* fixed dollar amount for higher rate amounts */

int main(void) {
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
