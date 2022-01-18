/* 
 * File: miles.c
 * -------------
 *  This program prints a table of conversion from miles 
 *  to kilometers.
 */

#include <stdio.h>

int main () {
   printf(" Prints a table of conversion from miles to kilometers\n");

   int miles = 20;
   int end = 144;
   int increment = 5;

   printf("Miles to kilometers conversion\n");

   while (miles <= end) {
      int kilometers = miles * 1.60934;
      printf("%d\t%d\n", miles, kilometers);
      miles += increment;
   }

   printf("end\n");

   return 0;

}
   




