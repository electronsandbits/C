/*
 * File: integers.c
 * ----------------
 * This program uses the standard identifiers provided 
 * by the C compiler, listed in the limits.h header file
 * to display the actual range of values provided by each of 
 * C's integer data types.
 */

#include <stdio.h>
#include <limits.h>


int main() {
   printf("The smallest character code that can be stored is %d\n", SCHAR_MIN);
   printf("The largest character code that can be stored is %d\n", SCHAR_MAX);
   
   printf("The smallest integer code that can be stored is %d\n", INT_MIN);
   printf("The largest integer code that can be stored is %d\n", INT_MAX);

   printf("The smallest short code that can be stored is %d\n", SHRT_MIN);
   printf("The largest code that can be stored is %d\n", SHRT_MAX);

   printf("The smallest long code that can be stored is %d\n", LONG_MIN);
   printf("The largest long code that can be stored is %d\n", LONG_MAX);

   return 0;


}

