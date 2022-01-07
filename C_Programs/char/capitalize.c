/*
 * File:capitalize.c
 * -----------------
 * This program uses the fact that characters have an underlying
 * integer-valued representation- that is the numeric value of 
 * their ASCII representation. The character constant 'a' has the value
 * 97. The values of both the lower and uppercase letters occur in order.
 * Because of this, the expression 'a' + 1 = 'b', 'b' + 1 = 'c', and ...
 * Also because there are 26 letters in the alphabet, the expression 
 * 'z' - 'a' = 25. The expression 'A' - 'a' = 'B'-'b' = 'C'- 'c'...because
 * of this, if the variable c has the vaue of a lowercasse letter, then the
 * expression c + 'A' - 'a' has the value of the corresponding 
 * uppercase letter. These ideias are incorporated into the next program, 
 * which capitalizes all lowercase letters.
 */

#include <stdio.h>

int main() {
   int c;

   while ((c = getchar()) != EOF) {
      if  (c >= 'a' && c <= 'z') { /* test to see if the value of c is lowercase */
	 putchar (c + 'A' - 'a');  /* if c is lowercase, then prints uppercasew */
      } else {
         putchar (c);
      }
    
    }
    
    return 0;
}
