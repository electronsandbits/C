/*
 * File: dummy.c 
 * -------------
 * This simple program illustrates how to use printf function.
 */

#include <stdio.h>


int main() {
   int i, j, profit;
   float x, y;

   i = 10;
   j = 20;
   x = 43.2892f;
   y = 5527.0f;
   profit = 10;


   printf("i  =  %d, j = %d,  x = %f, y = %f\n", i, j, x, y); 
   // printf("%d %d\n", i); /* Wrong */
   // printf("%d\n", i, j); /* Wrong */
   printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
   printf("\"Hello!\"");
   printf("\n");
   printf("\\");
   printf("\n");
   printf("Net profit: %d%%\n", profit);
}
