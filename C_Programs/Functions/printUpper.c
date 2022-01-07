/*
 * File: printUpper.c
 * ------------------
 * This program prints its string arguments in uppercase.
 * Thus illustrating calling function with arrays.
 */

#include <stdio.h>
#include <ctype.h>

/*Function prototype */

void printUpper(char *string);

/* Main program */

int main () {
   char string[80];

   printf("Enter a string: ");
   gets(string);
   printUpper(string); /* Function's call */
   printf("\nstring is now uppercase: %s\n", string);

   return 0;
}
/*
 * Function:printUpper(s)
 * Usage: void printUpper(string);
 * -------------------------------
 *  Prints a string in uppercase.
 */
 
void printUpper(char *string) {
   register int t;
    
   for (t = 0; string[t]; ++t)  {
      string[t] = toupper(string[t]);
      putchar(string[t]);
   }
}

