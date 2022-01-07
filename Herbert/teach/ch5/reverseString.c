/*
 * File: reverseString.c
 * ---------------------
 * This program inputs a string, then displays it backward on the screen.
 */

#include <stdio.h>
#include <string.h>


int main() {
   char str[80];
   int i;


   /* input the string */
   printf("Enter a string: ");
   gets(str);

   
   /* Reverse a string */
   for (i= strlen(str) - 1; i >= 0; i--) {
      printf("%c", str[i]);
   }
   
   printf("\n");
   return 0;
}
