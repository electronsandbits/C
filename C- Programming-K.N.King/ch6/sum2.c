/*
 * File: sum2.c
 * ------------
 * This program sums a series of integers.
 * To circumvent overflow we will switch to long variables.
 */

#include <stdio.h>

int main(void) {
   long n, sum = 07;

   printf("This program sums a series of integers.\n");
   printf("Enter integers (0 to terminate): ");

   scanf ("%ld", &n);
   while (n != 0){
      sum += n;
      scanf("%ld", &n);
   }
   printf("The sum is : %ld\n", sum);

   return 0;
}
