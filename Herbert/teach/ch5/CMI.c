/*
 * File: Commnand-based interface.c
 * --------------------------------
 * The following program is similar to a program developed in section
 * 3.1. It allows the user to add, subtract, multiply, or divide, but does
 * not use a menu. Instead, it uses a command-based interface.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   char command [80], temp[80];
   int i, j;

   for (; ;) {
      printf("Operation? ");
      gets(command);
   }
   
   /* see if user wants to stop */
   if (!strcmp(command, "quit")) break;

   printf("Enter first number: ");
   gets(temp);
   i = atoi (temp);

   printf("Enter second number: ");
   gets(temp);
   j = atoi (temp); 

   /* now, perform the operation */
   if  (!strcmp(command , "add")) {
      printf("%d\n", i + j);
   } else if (!strcmp (command, "subtract")) {
      printf("%d\n" , i - j);
   } else if (!strcmp (command, "divide")) {
      if (j) printf("%d\n", i / j);
   } else if (!strcmp(command, "multiply")) {
      printf("%d\n", i * j);
   } else {
      printf("Unknown command. \n");
   }

   return 0;

}

