/*
 * File: tax.c
 * -----------
 * This program computes  an income tax for NJ resident's.
 * New Jersey state income tax is assessed at 2% of taxable
 * income for incomes less than or equal to $20,000. For taxable 
 * income greater than $20,000, state taxes are 2.5% of the income 
 * that exceeds $20,000 plus a fixed amount of $400.
 */

#include <stdio.h>


/* Constants */

#define LOWRATE  0.02     /* Lower tax rate */
#define HIGHRATE 0.025    /* Higher tax rate */
#define CUTOFF   20000.0  /* Cut off for low rate */
#define FIXEDAMT 400      /* Fixed dollar amount  for higher rate amounts */


/* Main program */

int main() {
   float taxable, taxes;
   printf("This program calculates  an income tax.\n");

   printf("Please  type in the taxable income: ");
   scanf ("%f", &taxable);

   if  (taxable <= CUTOFF) {
      taxes = LOWRATE * taxable;
   } else {
      taxes = HIGHRATE * (taxable - CUTOFF) + FIXEDAMT;
   }
   printf("Taxes are $%7.2f\n", taxes);

   return 0;
}






