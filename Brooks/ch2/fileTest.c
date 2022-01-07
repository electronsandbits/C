/*
 * File:fileTest.c
 * ---------------
 * This program demonstrates how to read a file of unknown length.
 */

#include <stdio.h>
#define FILE_NAME "structur.txt"

int main() {
   FILE *Infile;
   int count = 0;
   int hour, minute, second;
   float length;
   int status;

   Infile = fopen(FILE_NAME, "r");
   
   while(1) {
      status = fscanf(Infile, "%i %i %i %f", &hour, &minute, &second, &length);   
      if (status == EOF) break;
      printf("%2i  %2i  %2i  %6.2f\n", hour, minute, second, length);
      count = count + 1;
   }
   fclose (Infile);
   printf("Lines in file =  %i\n",  count);

   return 0;
}

