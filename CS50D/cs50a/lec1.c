/*
 * File:lec1.c 
 * -----------
 * This program  prints a message to stdout ans exits.
 * Original program by Charles C Palmer on 1/1/16/
 */

#include <stdio.h>
#include <stdlib.h>


int main (int argc, char  const *argv[]) {
   int i, j, k;   

   i = 6;
   j = 7;
   k = i * j;
   printf("The answer to life, the universe, and  everything is ...\n\t%d\n" ,k);   

   return 0;

}
