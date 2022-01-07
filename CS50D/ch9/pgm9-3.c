/* 
 * File:pgm9-3.c 
 * -------------
 * This program illustrates string processing, using 
 * the character-input getchar() to enter a string one 
 * character at a time.
 */

#include <stdio.h>


/* Constants */

#define LSIZE 81


/* Main program */

int main() {
   char message[LSIZE];
   char c;
   int i;

   printf("Enter a string: \n");
  
   i = 0;
   while (i < (LSIZE - 1) && (c = getchar()) != '\n') {
      message[i]  = c;  /* Store the characters entered */
      i++;
   }
   message [i] = '\0';  /* Terminate the string */
   
   printf("The string just entered is: \n");
   puts(message);

   return 0;
 
}

 
