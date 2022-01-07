/* 
 * File:tirePrice.c 
 * ----------------
 * This program asks the user for a number of tires and price per tire.
 * It then calculates a total price, adding sales tax. 
 */

#include <stdio.h>

/* Constants */

#define SALESTAX .07

/* Main program */

int main ()  {
   int numTires;
   float tirePrice, beforeTax, netSales;

   /* Get the number of tires purchased and price per tire. */
   printf("How many tires did you purchase ? ");
   scanf(" %d", &numTires);
   printf("What was the cost per tire (enter in $XX.XX format) ?");
   scanf(" $%f", &tirePrice);

   /* Compute the price */
   beforeTax = tirePrice * numTires;
   netSales = beforeTax + (beforeTax * SALESTAX);

   printf("You spent $%.2f on your tires\n\n\n", netSales);
 
   return 0;
}

