/*
 * File:guessPrime1.c 
 * ------------------
 * This program  prompts the user to enter a prime number between 1-100,
 * and then the program should be able to guess if that number is prime 
 * or not.
 */

#include <stdio.h>
#include <stdlib.h>


/* Constants */

const int answer = 31;


int main() {
   printf("This program determines whether an entered number is prime.\n");
   int guess;   

   printf("Enter a prime between 1-100: ");
   scanf("%d", &guess);

   while (guess != answer) {
      printf("Wrong! try again\n");
      printf("Enter a prime between 1-100: ");
      scanf("%d", &guess);
   }

   return 0;
}

