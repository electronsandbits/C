/*
 * File:swap
 * ---------
 * This program illustrates call-by-reference. 
 * The swap() swaps the values of two variables in the calling 
 * environment.
 */

#include <stdio.h>

/*Function  prototypes */

void swap (int *, int *);


/* Main program */

int main() {
   int i = 3, j = 5;
   swap(&i, &j);             /* passing addresses as arguments to the function */
   printf("%d %d\n", i, j);  /* 5 3 is printed */
   
   return 0;

}

/* 
 * Function: swap()
 * Usage: int = swap(&i, &j);
 * --------------------------
 * Swaps the values of two variables in the 
 * calling environment.
 */

void swap(int *p, int *q) { /* used pointers in function definition */
   int tmp;

   tmp = *p;
   *p  = *q; 
   *q  = tmp;
}

