/* 
 * File: pgm6-10.c
 * ---------------
 * This program continuously requests that a user enter a character and 
 * determines if the character is a letter or a digit.
 */

#include <stdio.h>
#include <ctype.h>

int main() {

   char inChar;

   do {
     printf("\nPush any key (type an x to stop) ");
     inChar = getchar(); /* get the next character typed */
     inChar = tolower(inChar); /* convert to lowercase */
     getchar(); /* get and ignore the ENTER key */

    /* a nonzero value is true in C */
     if  ( isalpha(inChar) ) {
        printf("\nThe character entered is a letter.\n");
     } else if ( isdigit(inChar) ) {
        printf("\nThe character entered is a digit.\n");
     }
     }  while (inChar != 'x');

}
