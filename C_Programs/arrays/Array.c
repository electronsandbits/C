/*
 * File: Array.c
 * -------------
 * This program reads in 100 integers, find their averag, and 
 * determine by how much each integer deviates from that average.
 */
#include <stdio.h>

/* Constants */
#define NUMELTS 10

/* Main program */

int main()  {
   int num[NUMELTS];  /* array of numbers */
   int i;
   int total;         /* sum of numbers*/
   float avg;         /* average of the numbers */
   float diff;        /* difference between each number and the average */

   /* read the numbers into the array and add them */
   total = 0;
   for (i = 0; i < NUMELTS; i++) {
      scanf("%d", num[i]);
      total += num[i];
   }

   avg = (float) total / NUMELTS; /* compute the average */
   printf("\nnumber difference.");  /* print heading */

   /* print each number and its difference */
   for (i = 0;  i < NUMELTS; i++) {
      diff = num[i] - avg;
      printf("\n %d %f", num[i], diff);
   }

   printf("\naverage is : %f", avg);
}     


