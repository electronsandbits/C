/*
 * File: concatenate.c
 * -------------------
 * This program repeatedly input strings. Each time a string is input,
 * concatenate it with a second string called bigStr.
 * Add newlines to the end of each string. If the user types quit, stop 
 * inputting and display bigStr(which will contain a record of all string 
 * input. Also stop if bigStr will be overrun by the next concatenation.
 */

#include <stdio.h>
#include <string.h>

int main() {
   char bigStr[1000] = "", str[80];

   for (; ;) {
      printf("Enter a string: ");
      gets(str);
      if (!strcmp(str, "quit")) break;
      strcat(str, "\n");
      /* prevent an array overrun */
      if (strlen(bigStr) + strlen(str) >= 1000)  break;
      strcat(bigStr, str);
    }
    printf(bigStr);

    return 0;
}



