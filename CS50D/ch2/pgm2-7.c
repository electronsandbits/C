/*
 * File:pgm2-7.c
 * -------------
 * This program illustrates simple variables declarations.
 */


#include <stdio.h>


int main() {
   float grade1;
   float grade2;
   float total;
   float average;

   grade1 = 85.5f;
   grade2 = 97.0f;

   total = grade1 + grade2;

   average = total / 2.0;

   printf("The average grade  is  %f\n", average);

   return 0;
}
