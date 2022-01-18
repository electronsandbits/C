/*
 * File:gifts.c 
 * ------------
 * This program calculates how much 
 * money will be spent on holidays gifts.
 */

#include <stdio.h>

int main () {

   /* Variables to hold costs. */     
   float gift1, gift2, gift3, gift4, gift5;
   float total; /* Variable to hold total amount */
 
   /* Asks for each gift amount */  
   printf("How much do you want to spend on your mom?");
   scanf("%f", &gift1);

   printf("How much do you want to spend on your dad?");
   scanf("%f", &gift2);

   printf("How much do you want to spend on your sister?");
   scanf("%f", &gift3);
 
   printf("How much do you want to spend on your brother?");
   scanf("%f", &gift4);

   printf("How much do you want to spend on your favorite ");
   printf("C programming author? ");
   scanf("%f", &gift5);

   /* Computes total amount spenf on gifts */
   total  = gift1 + gift2 + gift3 + gift4 + gift5;
   printf("The total you wil be  spending on gifts is $%.2f.\n", total);
  
   return 0;
}

