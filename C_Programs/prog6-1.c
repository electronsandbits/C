/* 
 * File:prog6-1.c 
 * --------------
 * This program illustrates basic arrays concepts.
 */

#include <stdio.h>

int main (void ) {
   int values[10];
   int i;

   values[0] = 197;
   values[2] = -100;
   values[5] = 350;
   values[3] = values[0] + values[5];
   values[9] = values[5] / 10;
   --values[2];
  
   for (i = 0 ; i < 10; i++)
      printf("Values[%i] = %i\n", i, values [i] );

}
