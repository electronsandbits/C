/*
 * File: string.c
 * --------------
 * The following program illustrates the use 
 * of string functions.
 */

#include <stdio.h>
#include <string.h>

int main() {
   char str1[80], str2[80];
   
   gets(str1);
   gets(str2);
   printf("Lengths: %d %d\n", strlen(str1), strlen(str2));

   if (!strcmp(str1, str2)) { 
     printf("The strings are equal.\n");		   
   }

   strcat(str1, str2);
   printf("%s\n", str1);

   strcpy(str1, "This is a test.\n");
   printf(str1);

   if (strchr("hello", 'e')) { 
     printf(" e is in hello\n");
   }
   if (strstr(" hi there ", "hi")) {
     printf("found hi\n");
   }
   
   return 0;
}

