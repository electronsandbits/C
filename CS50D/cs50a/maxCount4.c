/* 
 * File:maxCOunt4.c 
 * ----------------
 * This program illustrates the for loop.
 */

#include <stdio.h>

/* Constants */

#define MAXCOUNT 36

int main (void)  {
   int count; 
   
   for ( count = 2; count <= 36; count += 2)  {
      printf ("%d ", count );
   }
   return 0;
}
