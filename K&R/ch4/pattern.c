/*
 * File:pattern.c 
 * --------------
 * This program print each line of its input that contains 
 * a particular "pattern " or string of characters.
 * For example, searching for the pattern of letters "ould" 
 * in the set of lines.
 */

#include <stdio.h>


/* Function prototypes */

int getLine(char line[], int max);
int strIndex(char source[], char searchFor[]);


/* Constants */

#define MAXLINE 1000 /* Maximum input line length */

/* Global variable */

char pattern[] = "ould"; /* pattern to search for */


/* Main program */

int main () {
   char line [MAXLINE];
   int found  = 0;

   while (getLine(line, MAXLINE) > 0 ) {
      if (strIndex(line, pattern) >= 0) {
        printf("%s", line);
	found++;
      }
      return found;
    }

}

/* 
 * Function:getLine
 * Usage: int getLine (char s[], int lim);
 * ---------------------------------------
 * Get line into s, return length.
 */

int getLine (char s[], int lim) {
  int c , i;

  i = 0;
  while (-- lim > 0 && (c = getchar()) != EOF && c !=  '\n') {
     s[i++] = c;
     if (c == '\n') {
       s[i++] = c;
     }
     s[i] = '\0';
     return i;
  }

}

/* 
 * Function:strIndex
 * Usage: int strIndex (char s[], char s[]);
 * -----------------------------------------
 * Return index of t in s, -1 if none.
 */

int strIndex (char s[], char t[]) {
  int i, j, k;

  for (i = 0; s[i] != '\0'; i++) {
     for (j = i, k = 0; t [k] != '\0' && s[j] == t[k]; j++, k++) {
       if (k > 0 && t[k] == '\0') {
          return i;
        }
     }
     return -1;
  }
}
