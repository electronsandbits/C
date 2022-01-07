/*
 * File: while_loop1.c
 * -------------------
 * This program illustrate the while statement.
 */


#include <stdio.h>

int main()  {
   int count;

   count = 1;
   while (count <= 10) {
      printf("%d ", count);
      count++;
   }
   printf("\n");

   return 0;
}
