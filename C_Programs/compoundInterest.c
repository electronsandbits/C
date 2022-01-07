/*
 * File: compoundInterest.c 
 * This program computes the compound interest.
 */

#include <stdio.h>
#include <math.h>


int main () {
   float p, r, n, i, f;

   printf("Please enter a value for the principal (p): ");
   scanf("%f", &p);
   printf("Please enter a value for the interest rate (r): ");
   scanf("%f", &r);
   printf("Please enter a value for the number of years (n): ");
   scanf("%f", &n);

   /* Calculate i, then f */
  
   i = r / 100;
   f = p * pow (( 1 + i ), n);

   /* Display the output */
  
   printf("\nThe final value (F) is: %.2f\n", f);

   return 0;
}
