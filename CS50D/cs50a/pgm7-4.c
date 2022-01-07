/*
 * File: Pgm7-4.c 
 * --------------
 * This program illustrates using the address operator, &
 * to display the address of the variable named num.
 */

#include <stdio.h>

int main() {
   int num;

   num = 22;
   printf("num = %d\n", num);
   printf("The address of num is %u\n", &num);

   return 0;
}
