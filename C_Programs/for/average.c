/*
 * File: average.c
 * ---------------
 * This program calculates the average of numbers
 * the user is prompted to input a set of numbers. As 
 * each number is input, it is added to a total.
 */

#include <stdio.h>

/* Constants */

#define MAXCOUNT 5

/*Main program */

int main() {
   printf("This program calculates the average of five user-entered numbers.");

   int count;
   float number, total, average;

   total = 0.0;
   for (count = 0; count < MAXCOUNT; count++) {
      printf("\nEnter a number: ");
      scanf("%f", &number);
      total += number;
   }
   
   average =  total / MAXCOUNT;
   printf("\n\nThe average of the %d numbers entered is %f\n", MAXCOUNT, average);


   return 0;

}

