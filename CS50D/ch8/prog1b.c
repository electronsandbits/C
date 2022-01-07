/*
 * File: prog1b.c 
 * -------------
 * 
 */

#include <stdio.h>

/* Constants */

#define PRICES 3

int main() {
   double prices[PRICES];
   int i;

   /* Input the prices */

   for (i = 0; i < PRICES; i++) {
      printf("Enter the prices: ");
      scanf("%lf", &prices[i]);
   }

   /* Display the prices */

   for (i = 0; i < PRICES; i++) {
      printf("%lf",  prices[i]);
   }
   
   return 0; 
}
