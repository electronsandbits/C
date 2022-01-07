/*
 * File: ptrArr2.c
 * ---------------
 * This program uses seasons array to identify and display
 * correctly the season corresponding to a user-inut month.
 */
#include <stdio.h>

int main() {
   int n;

   char *seasons[] = {"Winter", "Spring", "Summer", "Fall"};

   printf("\nEnter a month (use 1 for Jan. 2 for Feb., etc.) : " );
   scanf("%d", &n);

   n = (n % 12) / 3; /* create the correct subscript */
   printf("The month entered is a %s month.\n", seasons[n]);

   return n;

}

