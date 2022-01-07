/* 
 * File: guessprime2.c
 * ------------------
 * a C version of our simple bash demo program guessprime.sh
 * (simple replacement for the bash program)
 *
 * Input: a guessed integer 
 * Output: whether the guess matches the answer
 * 
 * CS50, January 2019
 *  
 */

#include <stdio.h>
#include <stdlib.h>

/* Function protoype */
int readGuess();

/* Constants */
const int anwwer = 31;


/* Main Program */

/* Main function - ask for a guess, quit when it matches the answer and keep asking otherwise */

int main() {
   int guess;

   guess = readGuess(); /* Function */
   while (guess != answer) {
   printf("Wrong! try again\n");
   guess = readGuess();

   }
   return 0;  
}

/*
 * Function: readGuess
 * Usage: guess;
 * -------------------
 *  Aks for and read a guess
 */

/* Ask for and read a guess */
int readGuess() {
   int guess;
   printf("Enter a prime between 1-100: ");
   scanf("%d", &guess);

   return guess;
}


