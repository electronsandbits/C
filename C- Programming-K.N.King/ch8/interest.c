/* 
 * File: interest.c 
 * ----------------
 * This program prints a table showing the value of $100 invested
 * at different rates of interest over a period of years.
 * The user will enter an interest rate and the number of
 * years the money  will be invested.The table will show the 
 * value of the money at one-year intervals- at that interest rate
 * and the next four higher rates- assuming that interest is compounded
 * once a year. This program  require two for loops. The outer loop will count from 1
 * to the number of years requested by the user.The inner loop will increment
 * the interest rate from its lowest value to its highest value.
 */ 
  
#include <stdio.h>

/* Constants */

#define NUM_RATES  ((int)  ( sizeof (value) / sizeof (value[0])))
#define INITIAL_BALANCE 100.00

/* Main program */

int main () {
   int i, lowRate, numYears, year;
   double value[5];

   printf("This program prints a table of compound interest.\n");
   printf("Enter interest rate: ");
   scanf("%d",  &lowRate);
   printf("Enter number of years: ");
   scanf("%d", &numYears);

   /* Prints the first row */
   printf("\nYears");
   for (i = 0; i < NUM_RATES; i++) { 
      printf("%6d%%", lowRate + i);
      value [i]= INITIAL_BALANCE;
   }
   printf("\n");

   /* Prints the second row.
    * The outer loop will count from 1 to the number of years
    * requested by the user. The inner loop will increment the 
    * rate from its lowest value to its highest value.
    */
   printf("------------------------------------------\n");
   for (year = 1; year <= numYears; year++) {
      printf("%3d    ", year);
      for (i = 0; i < NUM_RATES; i++) {
         value[i] += (lowRate + i ) / 100.0 * value[i];
         printf("%7.2f", value[i]);
      }
      printf("\n");
    }
    return 0;
}
  
