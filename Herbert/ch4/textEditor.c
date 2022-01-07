/*
 * File:textEditor.c
 * ------------------
 * This program illustrates how string works by using 
 * a string array as the basis for a very simple text editor.
 * This program inputs lines of text until a blank line is entered.
 * Then it displays each line one character at a time.
 */

#include <stdio.h>

/* Constants */

#define MAX 100
#define LEN 80

char text[MAX][LEN];

/* Main program */

int main() {
   printf("A very simple text editor\n");	

   register int t, i, j;

   printf("Enter an empty line to quit.\n");

   for (t = 0; t < MAX; t++) {
      printf("%d: ", t);
      gets(text[t]);
      
      if (!*text[t]) break; /* quit on blank line */
    }

    for (i = 0; i < t; i++) {
       for (j = 0; text[i][j]; j++)  putchar (text [i][j]);
       putchar ('\n');
    }

    return 0;
}


 
