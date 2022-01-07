/*
 * File: tableOfPowers.c
 * ---------------------
 * This program prints a table of powers.
 */

#include <stdio.h>

/* Function prototypes */

long power(int, int);
void printHeading(void);
void printTableOfPowers(int);

/* Constants */

#define N 7

/* Main program */

 int main () {
    printHeading();
    printTableOfPowers(N);

    return 0;
}

/*
 * Function: printHeading
 * Usage: printf();
 * ----------------------
 * Prints the heading. 
 */

void printHeading(void) {
   printf("\n:::::   A TABLE OF POWERS   :::::\n\n");
}

/*
 * Function:printTableOfPowers
 * Usage: printTableOfPower(n);
 * ----------------------------
 * Prints the table of powers.
 */

void printTableOfPowers(int n) {
   int i, j;
   for (i = 1; i <= n; ++i) {
      for (j = 1; j <= n; ++j) {
         if (j == 1) {
	   printf("%ld", power(i, j));
	 } else {
            printf("%9ld", power(i, j));
	 }
      }
      putchar('\n');
   }

}

/*
 * Function:long
 * Usage: long power(m, n);
 * ------------------------
 * COmputes the powers.
 */

long power(int m, int n) {
    int i;
    long product = 1;

    for (i = 1; i <= n; ++i) {
       product  *= m;
    }  
    return product;
}
