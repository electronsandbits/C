/*
 * File: StringFunctions.c
 * -----------------------
 * This program illustrates the use of string-related functions.
 * The four most important are strcpy(), strcat(), strcmp, strlen.
 */


#include <stdio.h>
#include <string.h>

int main() {
   char str[80];

   /* This fragment copies the string "hello " into str and
    *  displays it on the screen  
    */

   //strcpy(str, "hello");
  // printf("%s\n",  str);

    /* This fragment displays hello there */

   //strcpy (str, "hello");
   //strcat (str, "  there"); /* adds the contents of one string to another */
   //printf(str);
  // printf("\n");
   
   /* This fragment prints 0, because the strings are the same */

  // printf("%d\n", strcmp("one",   "one"));
  
    
   strlen("test");

   return 0;
}
