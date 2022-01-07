/*
 * File:guessPrime.c
 * -----------------
 *
 * Input: a guesses integer
 * Output: Whether the guess matches the answer
 *
 * CS50, Janaury 2019
 */

#include <stdio.h>
#include <stdlib.h>

/* Constansts */
const int answer  = 31;

/* Main program */

int main()  {
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


  

