/*
 * File:powerOfTwo.c 
 * ------------------
 * This program illustrates the while statement.
 * Its computes the smallest power of two that is 
 * greater than or equal to a number n.
 */


#include <stdio.h>

#define N 10
int main (void) {
   int i, n;
  
   i = 1;
   while (i < N) {
      printf("Enter a number: ");
      scanf("%d", &n);
      i = i * 2;
      printf("The power of two is %d\n", i);
      i ++;
   }  
  
   return 0;
}
