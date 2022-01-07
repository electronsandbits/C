/*
 * File: caps.c 
 * ------------
 * This program capitalizes all  lowercase letters
 * and doubles the newline characters.
 * The program starts checking wheter or not c is lowercase latter,
 * if its then c is printed.If not the program checks to see it there
 * is a newline character, and if there is two newline characters
 * are printed .
 * Finally if the value of c is not a lowercase letter and its 
 * not a newline  character, then the character corresponding
 * to the value of c is printed.
 */

#include <stdio.h>
#include <ctype.h>


int main(void) {
   int c;
 
   while ((c = getchar()) != EOF ) {
      if (islower(c)) {          /*  if c is a lowercase letter */
        putchar (toupper(c());   /* print c if lowercase */ 
      } else if (c == '\n') {    /* if not lowercase, see if newline char */ 
         putchar('\n');
         putchar('\n');
      } else { 
         putchar(c);
      }
    }    

    return 0;
}
