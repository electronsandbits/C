/*
 * File:sales.c
 * ------------
 * This program calculate the monthly income of 
 * a salesperson using the following commission schedule.
 *  -------------------------------------------
 *  Monthly Sales                       Income
 *  --------------------------------------------
 *  >= 50,000                          575 + 16%
 *  >= 40,000                          550 + 14%
 *  >= 30,000                          525 + 12%
 *  >= 20,000                          500 + 9%
 *  >= 10,000                          450 + 5%
 *  <  10,000                          400 + 3% 
 *
 * The program uses if-else chain to calculate and display the 
 * income corresponding to the value of monthly sales input
 * int the scanf() function.
 */ 

#include <stdio.h>

int main() {
   float monthlySales, income;

   printf("Enter the value of monthly sales: ");
   scanf("%f", &monthlySales);

   if  (monthlySales >= 50000.00) {
      income = 575.00 + .16 * monthlySales;
   } else if (monthlySales >= 40000.00) {
      income = 550.00 + .14 * monthlySales;
   } else if (monthlySales >= 30000.00) {
      income  = 525.00 + .12 * monthlySales;
   } else if (monthlySales >= 20000.00) {
      income = 500.00 + .09 * monthlySales;
   } else if (monthlySales >= 10000.00 )  {
      income = 450.00 + .05 * monthlySales;
   } else {
      income = 400.00 + .03 * monthlySales;
   }

   printf("The income is $%7.2f\n", income );

   return 0;

}

