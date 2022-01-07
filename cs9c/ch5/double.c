/*
 * File: double.c
 * --------------
 * This program reads in a single number and then double it. And it use 
 * sscanf to get and then double a number 
 * from the user.
 */

#include <stdio.h>


int main (){
   char line[100];   /* input line from console */
   int value;        /*   a value to double */

   printf("Enter a value: ");

   fgets(line, sizeof(line), stdin);
   sscanf(line, "%d", &value);

   printf("Twice %d is %d\n", value, value * 2);

   return 0;
}
