/*
 * File:guessPrime4.c
 * ------------------
 * This program prompts the user for a guessed integer
 * and the output whether the guess matches the answer.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Function prototypes */

int readGuess(void);
bool isPrime(const int p);

/* Constants */

const int answer  = 31;

/* Main program */

int main() {
   int guess; 
   int guessCnt;

   guess = readGuess(); /* Function's Call */
   guessCnt = 1;/* Keep track of the number of guesses. Set 10 to be the max.*/
   while (guess != answer && guessCnt < 10) {	   
      printf("Wrong! try again\n");
      guess = readGuess();
      guessCnt++;
   }      
   printf("31 is the secret prime number. \n");

   return 0;
  
}

 /*
 * Function: readGuess()
 * Usage: int = readGuess;
 * -----------------------
 *  Ask for and read a guess.
 */

int readGuess(void) {
  int guess;
  printf("Enter a prime between 1-100: ");
  scanf("%d", &guess); 
 
  if (guess < 1 || guess > 100)  {
    printf("Hey! %d is out of range [1... 100].\n", guess);
  } 
   
  if (!isPrime(guess)) {
    printf("Hey! %d is not even a prime number.\n", guess);
  }
  
  return guess;
}

/* 
 * Function: isPrime()
 * Usage: isPrime(n);
 * --------------------
 * Check whether the number is prime, assuming n <= 100.
 */ 
 
bool isPrime (const int n) {
   if (n < 2) return false;
   if (n > 2 && n % 2 == 0 ) return false;
   if (n > 3 && n % 3 == 0 ) return false;
   if (n > 5 && n % 5 == 0)  return false;
   if (n > 7 && n % 7 == 0)  return false;
 
   return true;
}







