/*
 * File:integer.c
 * --------------
 * This program tests whether n is less than 0, equal to 0,
 * or greater than 0.
 */

#include <stdio.h>

int main() {
   printf("Test whether n is less than 0, equal to 0, or greater than 0\n");

   int n;

   printf("Enter the number: ");
   scanf("%d", &n);

   if  (n < 0 ) {
      printf("n is less than 0\n");
   } else if (n == 0){
      printf("n is equal to 0\n");
   } else  {
      printf("n is greater than 0\n");
   }

   return 0;

}

