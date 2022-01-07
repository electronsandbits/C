/*
 * File:char.c
 * -----------
 * Th following sample code shows the input and output of
 * character arrays.
 */


#include <stdio.h>

int main() {
   char name[20];

   printf("Enter the name:\n");
   scanf("%15c\n", name);
   printf("The name entered is: %15c\n" , name);

   return 0;

}
