/*
 * File: string.c
 * --------------
 * This program stores a line typed in by the user in an array of 
 * characters(string) and then prints the line backwards on the screen. 
 * The program illustrates how characters in C can be treated
 * as small integers.
 */

#include <stdio.h>
#include <ctype.h>

/* Constants */

#define MAXSTRING 100

/* Main program */

int main () {
   char c, name[MAXSTRING];
   int i, sum = 0;

   printf("\nHi! What is your name?  ");
   for (i = 0; (c = getchar()) != '\n'; ++i) {
      name[i]  = c;
      if (isalpha(c)) {
        sum += c;
      }
   }
   name[i] = '\0';
   printf("\n%s%s%s\n%s", "Nice to meet you ", name, "." ,  "Your name spelled backwards is ");
   for (--i; i >= 0; --i)  {
      putchar(name[i]);
   }   
   
   printf("\n%s%d%s\n\n%s\n", "and the letters in your name sum to ", sum, ".", "Have a nice day!");

   return 0;   
}
