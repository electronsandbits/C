/*
 * File:string.c
 * -------------
 * This program illustrates string processing.
 * This shorter version is what an experienced C programmer would do.
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
 * Usage:strcopy(newMessage, message);
 * ----------------------------------
 * Copies the content of string2 to string1.
 */

void strcopy(char string1[], char string2[]) {
   int i = 0;  
   
   while (string1[i] = string2[i)) {  
      i++;
   }
 
}
