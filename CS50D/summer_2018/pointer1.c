/*
 * File: pointer1.c
 * ----------------
 * This short program demonstrate pointers.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Global variable */

char *CS = 'CS50';


int main ()  {
   printf(" CS = %p, *CS = '%c', CS as string = '%s'\n", CS, *CS, CS);
 
   for (char *P = CS; *p != '\0'; p++)  {
      printf("p = %p, *p = '%c'\n", p , *p); 
   }
   return 0;
}

   
