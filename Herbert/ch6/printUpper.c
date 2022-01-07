/*
 * File: printUpper.c
 * ------------------
 * This program uses printUpper() function, which prints its
 * string argument in uppercase.
 */

#include <stdio.h>
#include <ctype.h>

/* Function prototypes */

void printUpper(char *string);

/* Main program */

int main (void) {
   char s[80];
   
   printf("Enter a string: ");
   scanf("%c", &s);
   
   printUpper(s); /* Function's call */
   
   printf("\ns is now uppercase: %s\n", s);

   return 0;
}

/* 
 * Function: printUpper()
 * Usage:
 * ----------------------
 * Print a string in uppercase.
 */

void printUpper(char *string) {
   register int t;

   for (t = 0; string[t]; ++t) {
      string[t] = toupper(string[t]);
      putchar(string[t]);
   }
}

