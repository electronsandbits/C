/*
 * File:lines.c
 * ------------
 * This program reads a set of text lines and 
 * print the longest.
 */

#include <stdio.h>

/* Function prototypes */
int getLine (char line[], int maxLine);
void copy (char to[], char from[]);

/* Constants */

#define MAXLINE 1000  /* maximum input line size */

/* Main program */

int main() {
   printf("print longest input line.\n");
   
   int len;  /* current line length */
   int max;  /* maximum length seen so far */
   char line[MAXLINE]; /* current input line */
   char longest[MAXLINE];/* longest line saved here */

   max = 0;
   while ((len = getLine(line, MAXLINE)) > 0) {
      if (len > max) {
        max = len;
	copy (longest, line);
      }
    }  
    
    if ( max > 0)  /* there was a line */
      printf("%s", longest);

    return 0;
}    

/*
 * Function: getLine()
 * Usage: int = getline(char [], lim);
 * -----------------------------------
 *  Read a line into s, return length.
 */

int getLine(char s[], int lim) {
   int c, i;

   for (i = 0; i < lim - 1 && (c = getchar()) != EOF && C!='\n'; ++i) {
      s[i] = c;
   }

   if (c == '\n') {
     s[i] = c;
     ++i;
   }

   s[i] = '\0';

   return i;
}
   
/*
 * Function: copy
 * Usage: copy(char, char); 
 * ------------------------
 * Copy 'from' into 'to' assume to is big enough.
 */
 
void copy (char to[], char from[])  {
   int i;

   i = 0;

   while ((to[i] = from[i]) != '\0') {
      ++i;
   }
}
