/*
 * File:cmdLine.c
 * --------------
 * This program illustrates the use of command line argument.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])  {
   if (argc!= 2)  {
     printf("You forgot to type your name.\n");
     exit(1);
   }	   
   printf("Hello %s\n", argv[1]);
   
   return 0;
}

