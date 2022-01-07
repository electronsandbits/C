/* 
 * File:count.c
 * ------------
 * This program count characters in input.
 */

#include <stdio.h>

int main()
{
   long nc;

   nc = 0;
   while (getchar() != EOF) {
      ++nc;   
   }
   printf("%ld\n",  nc);
    
   return 0;
}

