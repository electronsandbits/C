/*
 * File: char.c
 * ------------
 * This program reads a character from a terminal
 * and then displays the code value of the character.
 */

#include <stdio.h>

int main() {
   printf("Print the numeric code of a character.\n");
   char ch;
  
   printf("Enter a character: ");
   scanf("%c", &ch);
   printf("Its numeric code value is: %d\n", ch);

   return 0;
}
