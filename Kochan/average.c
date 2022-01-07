/*
 * File:average.c 
 * --------------
 * This program calculate the average
 * of a list  of n numbers.
 * Our strategy will be  based on the use 
 * of a partial sum that is initially set 
 * equal to zero, then updated as each new number
 * is read into the computer.
 */


#include <stdio.h>

int main()
{
   int n, count = 1;
   float x, average, sum = 0;

   /*Initialize and read in a value  for n */
   printf("How many numbers? ");
   scanf("%d", &n);
   
   /* Read in the numbers */
   while (count <= n) {
      printf("x = ");
      scanf("%f", &x);
      sum += x;
      ++count;
   }

   /*Calculate the average and display the answer */
   average = sum / n;
   printf("\nThe average is %f\n", average);

   return 0;
}

