/*
 * File: deal.c 
 * ------------
 * This program deals a random hand from a stardard
 * deck of playing cards. The program will request the 
 * user to specify how many cards should be in the hand.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h> 

/* Constans*/

#define NUM_SUITS 4
#define NUM_RANKS 13

/* Main Program */

int main (void) {

   bool inHand[NUM_SUITS][NUM_RANKS] = {false};
   int numCards, rank, suit; 

   const char rankCode[]  = {'2', '3', '4', '5', '6', '7', '8',
			     '9', 't', 'j', 'q', 'k','a'};
   const char suitCode[]  = {'c', 'd', 'h', 's'};

   srand((unsigned) time (NULL));

   printf("Enter a number of cards in hand: ");
   scanf("%d ", &numCards);

   printf("Your hand:");
   while  (numCards > 0 ) {
      suit  = rand()  %  NUM_SUITS;   /* picks a random suit */
      rank  = rand()  %  NUM_RANKS;   /* picks a random rank */
      if ( !inHand[suit][rank]) {
        inHand[suit][rank] = true;
        numCards--;
        printf(" %c%c", rankCode[rank], suitCode[suit]);
      }
    }  
    printf("\n");
   
    return 0;
}









