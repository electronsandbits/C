/* 
 * File:array6.c 
 * -------------
 * This program demonstrates writing to a data file.
 */

#include <stdio.h>


/* Constants */
#define A 5

/* Main program */

int main() {
  FILE *outptr;
  int i;
  int a[A] = {12, 13, 25, 16, 43};

  outptr = fpoen("myfileout.dat", "W");

  for (i = 0; i < A; i++) {
     fprintf(outptr,"%d   ", a[i]);
  }
}
