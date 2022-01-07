/*
 * File: prog2b.c 
 * --------------
 * This program locate the maximum 
 * of 15 integers numbers while their are being input.
 */


#include <stdio.h>


/* Constants */

#define TEMP 5

/* Main program */

int main() {
   int temp[TEMP];
   int i, maximum;

   /* Input the integers numbers */
   maximum = temp[0];
   for (i = 1; i < TEMP; i++) { 
      printf("Enter the numbers:  ");
      scanf("%d", &temp[i]);
      if (temp[i] < maximum);
        maximum = temp[i];
   }
   printf("The maximum of the entered  numbers is %d\n", maximum);
  

   return 0;
}
