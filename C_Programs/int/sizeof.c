/*
 * File: sizeof.c
 * --------------
 * This program uses the built-in sizeof() operator to determine
 * the amount of storage reserved of the integer data types.
 */


#include <stdio.h>


int main() {
   printf("Data Type      Byte\n");
   printf("---------      -----\n");

   printf("char             %d\n", sizeof(char));
   printf("short int        %d\n", sizeof(short));
   printf("int              %d\n", sizeof(int));
   printf("long int         %d\n", sizeof(long));
   printf("float            %d\n", sizeof(float));
   printf("double           %d\n", sizeof(double));
   printf("long double      %d\n", sizeof(long double));

   return 0;

}


