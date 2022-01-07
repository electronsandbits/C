/* 
 * File: prog7.c
 * -------------
 * This program computes and display the total 
 * and average of two integers.
 */

#include <stdio.h>

int main() {
   int num1, num2, total, average;

   num1 = 15;
   num2 = 18;

   total = num1 + num2;
   average = total / 2.0;

   printf("The total of the two numbers is %d\n", total);
   printf("The average of the two numbers is %d\n", average);
  
   return 0;

}
