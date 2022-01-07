/*
 * File:args.c
 * -----------
 * This program prints out information about its received 
 * command-line arguments.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
   printf("This program received %d argumebts(s)\n", argc);


   for (int i = 0; i < argv; i++) {
      printf("Argument %d: %s\n", i, argv[i]);
   }

}
