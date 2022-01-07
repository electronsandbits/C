/*
 * File:arrayOfStrings.c
 * ---------------------
 * This short program illustrates how string arrays
 * work.This program input lines of text until a blank
 * lines is entered. Then it displays each line one character at a time.
 */

#include <stdio.h>

/* Constants */

#define MAX 100
#define LEN 80

/* Function prototypes */

char text [MAX][LEN];

/* Main program */

int main() {
   printf("A very simple text editor\n); 	
   register int t, i, j;

   printf("Enter a empty line to quit.\n");

   for (t = 0; t < MAX; t++) {
      printf("%d: ", t);
      gets(text[t]); 
      if (!*text[t]) break; /* quit on blank line */
   }  

   for (i= 0; i < t; i++ ) {
      for (j = 0; text[i][j]; j++) putchar (text[i][j]);
      putchar ('\n');
   }
     
   return 0;
 
}



