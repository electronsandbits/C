/*
 * File:pointer1.c
 * ---------------
 * This program demonstrates pointers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Constants */
char *CS = "CS50";

/* Main program */
int main() {
   printf(" CS = %p, *CS = '%c', CS as string = '%s'\n", CS, *CS, CS);

   for (char *p = CS; *p != '\0'; p++)  {
      printf(" p = %p, *p = '%c'\n", p , *p);    
   }
   
   return 0;
}



