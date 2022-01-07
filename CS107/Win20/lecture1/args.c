/*
 * File: args.c
 * ------------
 * This program prints out information about
 * its received command-line arguments.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
   printf("This program received %d argument(s)\n", argc);
   int i;
   for  (i = 0; i < argc; i++) {
      printf("Argument %d: %s\n", i, argv[i]);
   }
   
   return 0;
}

