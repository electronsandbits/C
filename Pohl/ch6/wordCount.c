/*
 * File:wordCount.c
 * ----------------
 * This function counts the number of words in a string.
 * We assume that words in the string are separated by white space.
 */

#include <stdio.h>
#include <ctype.h>

/* Function Prototypes */

int wordCount(const char *s);


/* 
 * Function: wordCount;
 * Usage: 
 * ----------------------
 *  Count the number of words in a string.
 */

int wordCount (const char *s) {
   int count = 0;

   while (*s != '\0') {
      while (isspace(*s)) { /* skip white space */
         ++s;
      }
      if (*s != '\0') { /* Found a word */
        ++count;
	while (!isspace(*s) && *s != '\0') /* Skip the word */
           ++S;		
      }
   }

   return count;
}
