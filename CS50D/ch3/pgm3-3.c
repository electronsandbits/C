/*
 * File: pgm3-3.c
 * --------------
 * This program illustrates the effect of using
 * shorthand assignment notation.
 */

#include <stdio.h>


int main(void)
{
   int sum;
   sum  = 0;
   printf("\nThe value of sum is initially set to %d.",sum);
   sum = sum + 96;
   printf("\n sum is now %d", sum);  
   sum = sum + 70;
   printf("\n sum is now %d", sum);
   sum = sum + 85;
   printf("\n sum is now %d", sum);
   sum = sum + 60;
   printf("\n sum is now %d", sum);
   printf("\n The final sum is %d.\n", sum);

   return 0;

}
  
