/*
 * File:escapeSequence.c
 * ---------------------
 * This program demonstrates the use of espace sequences.
 */

#include <stdio.h>


int main()  {
  /* Escape Sequence \n */
   printf("line1\nline2\nline3\n");
  
   /* Escape Sequence \t */
   printf("C  ");
   printf("for the ");
   printf("Absolute Beginner\n");
  
   printf("\n");
   
   /* Espace Sequence \r */
   printf("This escape sequence moves the cursor ");
   printf("to the beginning of this line\r");



   /* Escape Sequence \\ */
   printf("\nC:\\cygwin\\bin must be in your system path\n");

   printf("\n");
   /* Escape Sequence \" */
   printf("\"This is quoted text\"\n");
   
   /* Escape sequence \' */
   printf("\nA single quote looks like \'\n");

   return 0;

}   



