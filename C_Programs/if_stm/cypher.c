/*
 * File:cypher.c
 * -------------
 * This program repeats an input line but replaces each non-space
 * character with the character that follows it in the ASCII code 
 * sequence. Spaces will be reproduced as spaces. You can state the 
 * desired response as, "If the character is a space, print it; 
 * otherwise, print the next character in the ASCII sequence."
 */

#include <stdio.h>

/* Constant */
#define SPACE ' ' /* that's quote-space-quote */

int main() {
   printf("Alters input, preserving spaces.\n");

   char ch;

   ch = getchar();        /* read a character */
   while (ch != '\n') {   /* while not end of line */
      if (ch == SPACE) {  /* leave the space */
        putchar(ch);      /* character unchanged */ 
      } else {
         putchar(ch + 1); /* change other characters */ 
      }
      ch = getchar();     /* get next character */
   }
   putchar (ch);          /* print the newline */

   return 0;
}
