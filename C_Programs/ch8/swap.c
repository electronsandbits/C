/*
 * File: swap.c 
 * ------------
 * This program illustrates how the address of a variable can be
 * used as argurments to functions so as to achieve the effect of 
 * call-by-reference. For a function to effect call-by-reference,
 *  pointers  must be used in the parameters list in the function
 *  definition. Then, when  the function is called, addresses
 * of variables must be passed as arguments.
 */

#include <stdio.h>

/* Function prototypes */

void swap (int *, int *);


/* Main program */

int main (void) {
   int a = 3, b = 7;
 
   printf("%d  %d\n", a, b);  /* 3 and  7 is printed */
   swap(&a, &b);              /* Function's call */
   printf("%d  %d\n", a, b);  /* 7 and 3  is printed */

   return 0;

}

/*
 * Function: swap
 * Usage: int tmp = swap(a, b);
 * ---------------------------
 * Because the address of a and b are passed
 * as arguments to  swap(), the function is able
 * interchange the values  of a and b when called .
 */

void swap ( int *p, int *q) {
   int tmp;

   tmp = *p;   /* tmp is assigned the value of the object pointed to by p */
   *p = *q;    /* the object pointed to by p is assigned the value of the
                object pointd to by q.*/
   *q = tmp;   /* The object pointed to by q is assigned the value tmp. */
}
