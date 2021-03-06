/* 
 * File: pointer2.c 
 * ----------------
 * A short program to demonstrate memory addresses.
 * CS50 Summer 2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function prototypes */

void change(int *a, int b);


/* global variables */


const int fifteen = 15;


/* Main program */

int main() {
   int x = 2, y = 5; /* local variables are on the stack */

   /* global variables; note they are in low memory addresses */
   printf("globals\n");
   printf(" fifteen @ %p has value %d\n", (void *)&fifteen, fifteen);

   /* main() is a function, and its code is at an address too! */
   printf("main @ %p\n", (void *)main);

   /* local variables are on the stack */
   printf(" x @ %p has value %d\n", (void *)&x, x);
   printf(" y @ %p has value %d\n", (void *)&y, y);

   /* pass x by reference, y by value */
   change(&x,y);

   /* see whether those changed */
   printf("main @ %p\n", (void *)main);
   printf(" x @ %p has value %d\n", (void *)&x, x);
   printf(" y @ %p has value %d\n", (void *)&y, y);

   return 0;
}

/*
 * File: change
 * Usage (a, b);
 * -------------
 *  as above, change() is a function, and its
 *  parameters and local variables are on the stack
 */

void change(int *a, int b) {
 
  printf("change @ %p\n", (void *)change);  
  printf(" a @ %p has value %d at %p\n", (void *)&a, *a, (void *)a);
  printf(" b @ %p has value %d\n", (void *)&b, b);

  /* attempt to change the values */
  *a = 99;
  b = 99;
}
