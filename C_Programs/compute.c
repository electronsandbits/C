/*
 * File:compute.c 
 * --------------
 * This program illustrates call-by-value.
 */

#include <stdio.h>

/* Function prototypes */

int computeSum (int n);


/* Main program */

int main (void)  {
   int n = 3, sum; 
   
   printf("%d\n", n);
   sum = computeSum(n);
   printf("%d\n", n);
   printf("%d\n", sum);

   return 0;
}
   
/* 
 * Function:computeSum
 * Usage: int computeSum(int n);
 * -----------------------------
 * Computes the sum.
 */


int computeSum(int n) {
  int sum = 0;

  for (; n > 0; --n)  {
     sum += n ;
  printf("%d\n", n);
  return sum;
  }

}
