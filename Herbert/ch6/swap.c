/*
 * File:swap.c
 * -----------
 * The swap() exchanges the values of the two integers variables
 * pointed to by its arguments.
 */

#include<stdio.h>

/* Function prototypes */

void swap(int *x, int *y);

/* Main program */

int main(void) {
   int i, j;

   i = 12; 
   j = 21;

   printf("i and j before swapping: %d %d\n", i, j);
   swap(&i, &j); /* pass the addresses of i and j */
   printf("i and j after swapping: %d %d\n", i, j);
   
   return 0;

}
   /* 
    * Function: swap()
    * Usage: 
    * ----------------
    * The swap()function is able to exchange the values of the two variables
    * pointed to by x and y because their addresses(not their values) are
    * passed. Within the function, contents of the variables are accessed
    * using standard pointer operations, and their values are swapped.
    */

   void swap (int *x, int *y) {
      int temp;
      
      temp = *x;  /* save the value at address x */
      *x = *y;    /* put y into x */
      *y = temp;  /* put x into y */
}


