/*
 * File: ex5-4.c 
 * -------------
 * testing for loop.
 */

#include <stdio.h>


int main () {
   float count;
   
   for (count = 1.0; count <= 16.2; count += 0.2) {
      printf("%f ", count);
   }
   return 0; 
}


