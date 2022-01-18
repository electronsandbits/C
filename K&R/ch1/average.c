/*
 * File: Average2Doubles.c
 * -----------------------
 * This program averages two double-precision floating-point numbers.
 */

#include <stdio.h>

int main() {
   printf("This program averages two numbers.\n");
   float n1, n2, average;
   printf("Enter n1: ");
   scanf("%f", &n1);
   printf("Enter n2: ");
   scanf("%f", &n2);

   average = (n1 + n2) / 2;

   printf("The average is %f\n", average);

   return 0;
}
