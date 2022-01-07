/*
 * File:pgm9-1.c 
 * -------------
 * This program illustrates the use of gets() and puts() to input
 * and output a string entered at the user's terminal.
 */

#include <stdio.h>


/* Constants */

#define MSIZE 81

/* Main program */

int main()
{
   char message [MSIZE];
 
   printf("Enter a string:\n");
   gets(message);
   printf("The string just enteredd is :\n");
   puts (message);

   return 0;

}
