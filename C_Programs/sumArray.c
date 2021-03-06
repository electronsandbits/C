/*
 * File: sumArray.c 
 * ----------------
 * This program illustrates the use of one-dimensional array arguments. 
 * When given an array a of int values, sumArray returns the sum of the 
 * elements in a.
 * Since sumArray needs to know the lenght of a, we must supply it as a
 * second argument.
 */

#include <stdio.h>

/* Constants */

#define LEN 100

/* Function prototypes */

int sumArray (int a[], int n );

/* Main Program */

int main (void) {
   int b[LEN], total;
  

   total  = sumArray(b, LEN);
}


/* 
 * Function: sumArray
 * Usage: 
 * -------------------
 * When given an array a of int values, 
 * sumArray returns the sum of the elements in a.
 */


int sumArray (int a[], int n) {
   int i, sum = 0;
   
   for ( i = 0; i < n ; i++) {
      sum = sum + a[i]
   return sum;
   }


}
