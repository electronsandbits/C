/*
 * File: progr1a.c 
 *----------------
 */


#include <stdio.h>
#define MAXPRICES 9

int main () {
   double prices [MAXPRICES];
   int i;

   /* Input the grades */
   for (i = 0; i < MAXPRICES; i++) {
      printf("Enter a grade: ");
      scanf("%lf", &prices[i]);
   }
  
   /* Display the grades */
   for (i = 0; i < MAXPRICES; i++) {
     printf("price is %lf\n", prices[i]);
   }
   return 0;
}
