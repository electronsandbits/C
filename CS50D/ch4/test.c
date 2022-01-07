/*
* File:test.c
* -----------
* This program illustrates the use of relational expressions.
*/

#include <stdio.h>

int main() {
   printf("The value of 3 > 4 is %d", 3 < 4);
   printf("\nThe value of 2.0 > 3.3 is %d\n", 2.0 > 3.3);

   printf("\n");

   int i, j;
   double a, b, complete;
   a = 12.0;
   b = 2.0;
   i = 15;
   j = 30;
   complete = 0.0;

   printf("The value of a > b is %d\n", a > b);
   printf("The value of i == j || a < b || complete is %d\n", i == j ||a < b || complete); 
   printf("The value of a / b && i < 20 is %d\n", a / b && i < 20);

   return 0;
}
