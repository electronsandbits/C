/*
 * File:oct.c
 * ----------
 * This program illustrates how to read integers, using the %i, %d format 
 * specifiers.
 */

#include <stdio.h>

int main (){
   int i;

   printf("Give integer:  ");
   scanf("%i", &i);
   printf("%i %d\n", i, i);
   
   printf("Give integer: ");
   scanf("%d", &i);
   printf("%i  %d\n", i, i);

   return 0;

}
