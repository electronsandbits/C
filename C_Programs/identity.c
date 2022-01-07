/*
 * File: identity.c 
 *-----------------
 * This program uses a pair of nested for loops 
 * to generate an identity matrix. In mathematics, 
 * an identity matrix has 1's on the main diagonal 
 * where the row and column index are the same, and 
 * 0'a everywhere else.
 */

#include <stdio.h>

#define N 10

int main (void) {

   double ident[N][N];
   int row, col;

   for (row = 0; row < N; row++) {
      for (col = 0; col < N; col++) {
         if (row == col) {
           ident[row][col]  = 1.0;
         } else {
	    ident[row][col] = 0.0;
         }
      }
      printf ("%f", ident);
   }
   return 0;
}



