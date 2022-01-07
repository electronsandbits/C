/*
 * File: string.c
 * --------------
 * This program  illustrates string processing
 * in a charactet-by-character fashion.
 */

#include <stdio.h>
#include<string.h>

/* Function prototypes */
void strcopy(char [], char []);

/* Constants */

#define LSIZE 81

/* Main program */

int main() {
   char message [LSIZE];      /* enough storage for 80 characters plus '\0' */
   char newMessage[LSIZE];    /* enough storage for a copy of message */


   printf("Enter a sentence: ");
   gets(message);

   strcopy(newMessage, message); /* pass two array addresses */
   puts(newMessage);

   return 0;

}

/*
 * Function:strcopy()
 * Usage: strcopy(string1[], string2[]);
 * -------------------------------------
 *  Copy string2 to string1.
 */
 
 void strcopy (char string1[], char string2[]) {
    int i = 0;

    while (string2[i] !='\0')  {  /* check for the end-of-string */
       string1[i] = string2[i];   /* copy the element to string1 */	    
       i++;
    }

    string1[i]  = '\0'; /* terminate the copied string */

}

 

