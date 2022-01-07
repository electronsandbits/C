/*
 * File:pointer.c
 * --------------
 * A pointer is an address of an object in memory. Because
 * an array name is itself a pointer, the uses of arrays
 * and pointers are intimately related. The following program is 
 * designed to illustrate some of these relationships.
 */

#include <stdio.h>
#include <string.h>


/* Constants */

#define MAXSTRING 100


/* Main program */

int main()  {
   char c = 'a', *p, str[MAXSTRING];

   p = &c;
   printf("%c%c%c    ", *p, *p + 1, *p + 2);
   strcpy(str,  "ABC");
   printf("%s  %c%c%s\n", str, *str + 6, *str + 7, str + 1);
   strcpy(str,   "she sells sea shells by the seashore");
   p = str + 14;
   for ( ; *p != '\0'; ++p)  {
      if (*p == 'e') {
        *p = 'E';	   
      }
      if ( *p == ' ') {
        *p = '\n';
      } 

    }  
    printf("%s\n",  str);
    
    return 0;
}
