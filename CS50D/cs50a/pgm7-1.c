/*
 * File: pgm7-1.c
 * --------------
 * This program illustrates the use of global variable.
 */

#include <stdio.h>

/* Function prototypes */
void valfun();

/* create a global variable named firstnum */
int firstnum; 


/* Main program */

int main() {
   int secnum; /* create a local variable named secnum */
   firstnum = 10; /* store a value into the global variable */
   secnum = 20; /* store a value into the local variable */

   printf("\nFrom main(): firstnum = %d",firstnum);
   printf("\nFrom main(): secnum = %d\n",secnum);

   valfun(); /* call the function valfun */

   printf("\nFrom main() again: firstnum = %d",firstnum);
   printf("\nFrom main() again: secnum = %d\n",secnum);

   return 0;
}

/* no values are passed to this function */
void valfun() {
  int secnum; /* create a second local variable named secnum */
  secnum = 30; /* this only affects this local variable's value */

  printf("\nFrom valfun(): firstnum = %d",firstnum);
  printf("\nFrom valfun(): secnum = %d\n",secnum);
  firstnum = 40; /* this changes firstnum for both functions */
}
