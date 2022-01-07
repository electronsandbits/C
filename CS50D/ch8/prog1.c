/*
 * File: prog1a.c 
 * -------------
 * 
 */


#include <stdio.h>

/* Constants */

#define PRICES 9

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
      printf( "%lf\n",  prices[i]);
   }
  
   return 0; 
}
