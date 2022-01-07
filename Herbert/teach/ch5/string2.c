/*
 * File: string2.c
 * ---------------
 * This program reads a string entered at the keyboard.
 * Using a printf version.
 */

#include <stdio.h>

int main() {
   char str[80];

   printf("Enter a string (less than 80 chars) : ");
   gets (str);
   printf(str); /* output the string */
   printf("\n");

   return 0;

}  
	   

