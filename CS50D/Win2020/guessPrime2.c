/*
 * File:guessPrime2.c
 * ------------------
 * This program asks for guessed integer and output whether the guess 
 * matches the answer.
 *
 * CS50, January 2020
 */
 
#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */

int readGuess();

/* Constants */

const int answer = 31;

/* Main program */

int main () {
   int guess;

   guess= readGuess(); /* Function's call */
   while (guess != answer) {
      printf("Wrong! try again\n");
      guess= readGuess();
   }

   return 0;   

}
   
/* 
 * Function: readGuess
 * Usage: int = readGuess();
 * - ------------------------
 * Ask for and read a guess
 */

int readGuess() {
  int guess;

  printf("Enter a prime between 1-100: ");
  scanf("%d", &guess);
   
  return guess;

}

