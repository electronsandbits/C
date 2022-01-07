/*
 * File: range.c
 * -------------
 * This program determines the ranges of char, short, int
 * and long variables, both signed and unsigned, by printing appropriate
 * values from standard headers and by direct computation.
 */

#include <stdio.h>
#include <limits.h>

int main() {
   printf("This program determines the ranges of types.\n");
   printf("\n");

   /* signed types */
   printf("Signed types\n");
   printf("------------\n");
   printf("signed char  min = %d\n",  SCHAR_MIN);
   printf("signed char  max = %d\n",  SCHAR_MAX);
   printf("signed short min = %d\n",  SHRT_MIN);
   printf("signed short max = %d\n",  SHRT_MAX);
   printf("signed int   min = %d\n",  INT_MIN);
   printf("signed int   max = %d\n",  INT_MAX);
   printf("signed long  min = %ld\n", LONG_MIN);
   printf("signed long  max = %ld\n", LONG_MAX);
   printf("\n");

   /* unsigned types */
   printf("Unsigned types\n");
   printf("--------------\n");
   printf("unsigned char  max = %u\n",  UCHAR_MAX);
   printf("unsigned short max = %u\n",  USHRT_MAX);
   printf("unsigned int   max = %u\n",  UINT_MAX);
   printf("unsigned long  max = %lu\n", ULONG_MAX);

   return 0;

}

