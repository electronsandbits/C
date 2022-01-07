/*
 * File: textConversion.c
 * ----------------------
 * This program wil read a line of lowercase text 
 * character-by-character and store the characters
 * in a char-type array called letter. The program will 
 * continue  reading input characters until an end-of-line (EOF) 
 * character has been read. The characters will then 
 * be converted to uppercase, using the library 
 * function toupper, and displayed.
 * Two separate while loops will be used. The first will read the text
 * from the keyboard. The second while loop will perform the conversion and
 * write out the converted text.
 */


#include <stdio.h>
#include <ctype.h>


#define EOL '\n'

int main () {
   char letter [80];
   int tag, count = 0;


   /* Read in the lowercase text */
   while ((letter [count] = getchar()) != EOL )
      count++;
      tag = count;

  /* letter [count] = getchar ();
    while (letter[count] != EOL ) {
       count  = count + 1;
       letter[count] = getchar ();
    }

  */

   /* Display the uppercase text */
   count = 0;
   while (count < tag ) {
      putchar(toupper(letter[count])"\n");
      count++; 
      
   }
   return 0;
}
