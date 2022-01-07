/*
 * File: stringCopy.c
 * ------------------
 *  copying strings
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  Function prototypes */

void stringcopy(char *sp, char *dp);

/* Main program */

int main() {
   char *src = "CS 50";
   char *dest = "";  /* fix 2: char dest[] = "12345"; */

   /* copy src to dest and print them out */
   dest = malloc(strlen(src)+1);
   stringcopy(src, dest);
  
   printf("src  = '%s'\n", src);
   printf("dest = '%s'\n", dest);
  
   free(dest);  /* do not forget to free */
 
   return 0;
}
/* 
 * Function:stringCopy()
 * Usage_ stringCopy(char , char );
 * --------------------------------
 *  copy string from source sp to destination dp
 */

void stringcopy(char *sp, char *dp) {
   while (*sp != '\0') {
      *dp++ = *sp++;
   }
   *dp = '\0';
}

