/*
 * File: array2.c 
 * --------------
 * This program illustrates standard array input.
 */


#include <stdio.h>

/* Constants */

#define SIZE 5

int main() {
   int i, a[SIZE];


   /* Input the numbers */
   for (i = 0; i < SIZE; i++) {
      printf("Enter the numbers: ");
      scanf("%d", &a[i]);
   }

   /* Display the grades */
   for (i = 0; i < SIZE; i++) {
      printf("%d  ", a[i]);
   }
   printf("\n");

   return 0;
}
