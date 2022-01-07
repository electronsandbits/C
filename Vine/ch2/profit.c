/*
 * File:ShopProfit.c
 * -----------------
 * This program demonstrates a calculation that a merchant shop
 * in a game uses to sell gear to a player.
 */

#include <stdio.h>

int main() {
   float revenue, cost, profit;

   printf("\nEnter total renevue: ");
   scanf("%f", &revenue);

   printf("\nEnter total cost: ");
   scanf("%f", &cost);

   profit = revenue - cost;
   printf("\nYour profit is $%.2f\n", revenue - cost);


   return 0;



}
