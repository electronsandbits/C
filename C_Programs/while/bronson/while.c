/*
 * File: while.c
 * -------------
 * This program illustrates simple while program.
 */

#include <stdio.h>

int main()  {
   int count;

   count = 1;
   while (count <= 10)  {
      printf("%d " , count);
      count++;  /* add 1 to count */ 
   }
   printf("\n"); /* print a blank line */

   return 0;

}

