/*
 * File:repeatChar.c 
 * -----------------
 * This program uses parameterization, by parameterizing both the 
 * character to be printed and the number of times to print it.
 */

#include <stdio.h>
#include <ctype.h>


/* Function prototypes */

void repeat(char, int);

/* Constants */

const char  alert = '\a', c = 'A';

  /* Main program */

int main(void) {
   int i;
  
   repeat ('B' - 1, 2); 
   putchar (' ');
   for ( i = 0; i < 10; ++i) {
      repeat( c + i , i );
      putchar (' ');
   }
   repeat (alert, 100); /* Function's call */
   putchar('\n');
   
   return 0;
}


/*
 * FUnction: repeat
 * Usage: 
 * ----------------
 */

 void repeat (char c, int  how_many) {
    int i;

    for (i = 0; i < how_many; ++i) {
       putchar(c) ;
    }
}
     
    

