/* 
 * File: guessPrime5.c
 * -------------------
 * (added isPrime()function)
 * Input: a guessed integer 
 * Output: whether the guess matches the answer
 * CS50, January 2019
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Function prototypes */

int readGuess(void);
bool isPrime(const int p);

/* Constants */

const int answer = 31;

/* Main Program */

int main () {
   int guess;

   guess= readGuess(); /* Function's call */
   while (guess != answer) {
      printf("Wrong! try again\n"); 
      guess = readGuess();
   }      
   return 0;
}

/* 
 * Function: readGuess()
 * Usage: int  guess; 
 * ---------------------
 * Ask for and read a guess
 */

int readGuess(void) {
   int guess;

   printf("Enter a prime between 1-100: ");
   scanf("%d", &guess);

   if (guess < 1 || guess > 100) {
     printf("Hey! %d is out of range [1...100].\n", guess);
   }

   if (!isPrime(guess)) {
     printf("Hey! %d is not even a prime number.\n", guess);	   
   }

   return guess;
}

/*
 * Function: isPrime()
 * Usage: isPrime(n);
 * -------------------
 *  Check whether the number is prime
 *  assuming n <= 100
 */ 

bool isPrime (const int n) {
  if (n < 2)  return false;
  if (n > 2 && n % 2 == 0) return false;
  if (n > 3 && n % 3 == 0) return false;
  if (n > 5 && n % 5 == 0) return false;
  if (n > 7 && n % 7 == 0) return false;

  return true;

}


