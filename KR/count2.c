/* 
 * File:lineCount.c
 * ----------------
 * This program count lines.
 */

#include <stdio.h>

int main()
{
   int c, nl;

   nl = 0; 
   while ((c =  getchar()) != EOF) {
      if (c == '\n')
	++ln;
   }
   printf("%d\n",  nl);
    
   return 0;
}
