/* 
 * File:pgm9-3.c 
 * -------------
 * This program illustrates string processing, using 
 * the character-input getchar() to enter a string one 
 * character at a time.
 */


#include <stdio.h>


/* Function prototypes */

void getline(char []);


/* Constants */

#define LSIZE 81


/* Main program */

int main () {
   char message[LSIZE] ;

   printf("Enter a string: \n");
   getline(message);    /* Function's call */                   
   printf("The string just entered is:\n");
   puts (messge);

   return 0;
}


/*
 * Function: getline
 * Usage: getline(message);
 * ------------------------
 * Returns  a string of characters.
 */


void getline( char strng []) {
   int i = 0;
   char c;
   while (i < (LSIZE - 1) && (c = getchar()) != '\n') {
      strng [i]= c;
      i++;
   }

   strng[i] = '\0';
}


