/*
 * File: countWords.c 
 * ------------------
 * This program count the number of words being input at 
 * the keyboard.
 */

#include <stdio.h>
#include <ctype.h>

/* Function prototypes */

int foundNextWord(void);

/* Main program */

int main (void) {
   int wordCount = 0;

   while (foundNextWord() == 1) {
      ++wordCount;  
   }
   printf("Number of words = %d\n\n", wordCount);

   return 0;
}

/* 
 * Function: foundNextWord
 * Usage:
 * ------------------------
 * 
 */

int foundNextWord(void) {
  int c;

  while (isspace(c = getchar())) {
     ;              /* skip white space */
  }
  if (c =! EOF) {   /*  a word has been found */
    while (( c = getchar()) != EOF && !isspace (c)) {
       ;           /* skip all except EOF and white space */
    return 1;
    } 
  }
  return  0;
}
