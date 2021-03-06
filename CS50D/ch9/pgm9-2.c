/*
 * File:pgm9-2.c
 * -------------
 * This program illustrates string processing.
 */

#include <stdio.h>


/* Function prototypes */

void strcopy(char [], char []);


/* Constants */
 
#define LSIZE 81


/* Main program */

int main() {
   char message[LSIZE];
   char newMessage[LSIZE];

   printf("Enter a sentence: ");
   gets(message);

   strcopy(newMessage, message); /* Function's call */
   
   puts(message);

   return 0;
}
	     
/* 
 * Function: strcopy
 * Usage:
 * -----------------
 * Copies the content of string2 to string1.
 */

void strcopy(char string1[], char string2[]) {
   int i = 0;  /* i will be used as a subscript */
   
   // while (string2[i] !=  '\0') {  /* check for the end-of-string */
   while ( string2[i]) {  /* More Professional C */
      string1[i] = string2[i];    /* copy the element to string1 */
      i++;
   }

   string1[i] = '\0';             /* terminate the copied string */
}
