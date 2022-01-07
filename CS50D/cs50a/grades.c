/*
 * File: maxCount3.c
 * -----------------
 * This program computes grades. The grades 
 * are contiunuoulsy entered and accepted until a 
 * SENTINEL value is entered.
 */

#include <stdio.h>

/* Constants */

#define SENTINEL -1

int main (void) {
   float grade = 0.0;
   float total = 0.0;
 
   printf("\nTo stop entering grades, type in any negative number.\n\n");
  
   while (grade > SENTINEL) {
      printf("Enter a grade: ");
      scanf("%f", &grade);
      total  = total + grade;
   }
   
   printf("\nThe total of the grades is %f\n", total-grade);

   return 0;

}
