/*
 * File:char.c
 * -----------
 * This program will shoew how characters are treated as small
 * integers, and, conversevely, how small integers are treated as 
 * characters.
 */

#include <stdio.h>


int main() {
   char c = 'a';
   char c;
   int i;

   /* The variable c can be printed either as a character or as an integer*/   
   printf("%c", c);      /* a is printed */
   printf("%d\n", c);      /* 97 is printed */

   /* because c has an integer value, we may use it in arithmetic expressions */

   printf("%c%c%c\n", c, c + 1, c + 2); /* abc is printed */

   for (i = 'a'; i <= 'z'; ++i)  {
      printf("%c", i);  /* abc ... z is printed */
    }
 
    for (c = 65; c <= 90; ++c) {  /* ABC ... A is printed */
       printf("%c", c);
    }
    
    for (c = '0'; c <= '9'; ++c) {
       printf("%d ", c);           /* 48 49 ... 57 is printed */ 
    }
    
	
	   

   return 0;

}

