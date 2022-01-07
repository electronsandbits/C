/*
 * File: swap.c
 * ------------
 * This program illustrates cal by value. The swap() is able to exchange 
 * the values of the two variables pointed to by x and y because their 
 * addresses(not their values) are passed.
 */

#include <stdio.h>

/* Function prototypes */

void swap(int *x, int *y);

/* Main program */

int main () {
   int i, j;
   
   i = 144;
   j = 42;

   printf("i and j before swapping: %d %d\n", i, j);
   
   swap(&i, &j); /* pass the addresses of i and j */

   printf("i and j afer swapping: %d and %d\n", i, j);

   return 0;
}

/*
 * Function: swap(x, y)
 * Usage: int swap(x, y);
 * ----------------------
 * Swaps  the values of the variables pointed to by x and y.
 */  
 
void swap(int *x, int *y) {
    int temp;

    temp = *x; /* save the value at address x*/
    *x = *y;   /* put y into x */
    *y = temp; /* put x int y */
}    


