/*
 * File:guessPrime1.c
 * ------------------
 * This program prompts the user to enter an integer,
 * and then guess if the entered number is a primer number.
 * CS50, January 2020
 */

#include <stdio.h>
#include <stdlib.h>

/* Constants */

const int answer = 31;

/* Main program */

int main() {
   int guess;
   printf("Enter a prime between 1-100: ");
   scanf("%d", &guess);

   /* Compare guess number to answer */
   while (guess != answer) {
      printf("Wrong! try again\n");
      printf("Enter a prime between 1-100: ");
      scanf("%d", &guess);
   }

   return 0;
}



