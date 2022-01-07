/*
 * File:multArr.c
 * --------------
 * This program loads a two-dimensional array with the numbers
 * 1 through 12 and prints them row by row.
 */

#include <stdio.h>

int main() { 
   int t, i, num[3][4];
  
   for (t = 0; t < 3; ++t) {  /* rows */
      for (i = 0; i < 4; ++i) { /* columns */
         num [t][i] = (t * 4) + i + 1;
      }
   }   
   /* now prints them out */
   for (t = 0; t < 3; ++t) {
      for (i = 0; i < 4; ++i) {
         printf("%3d ", num[t] [i]);
      }	 
      printf("\n");	  
   }  
   
   return 0;

}   


