/*
 * File:pointer0.c 
 * ---------------
 * This program illustrates the use of pointers.
 */


#include <stdio.h>
#include <stdlib.h> /* Number conversion and storage allocation functions */


int main() {
   char c = 'x';   /* a character */
   char *p = &c;   /* a pointer to a character-store the adddress of c in p */
   char **pp = &p; /* a pointer to a pointer to a character */


   printf("c =  '%c'\n", c);
   printf("p = %p, *p = '%c'\n", p , *p);
   printf("pp = %p, *pp = %p, **pp = '%c'\n", (void *)pp, *pp, **pp);

   return 0;
}
