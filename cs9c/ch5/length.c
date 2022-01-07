/*
 * File:length.c
 * -------------
 *  This reads a line from the keyboard and reports its lenght.
 */

#include <stdio.h>
#include <string.h>

int main(){
   char line [100]; /* Line we are lloking at */

   printf("Enter a line: ");
   fgets(line, sizeof(line), stdin);

   printf("The length of the line is: %d\n", strlen(line));

   return 0;
}
