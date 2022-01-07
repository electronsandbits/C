/*
 * File: display.c
 * ---------------
 * sample showing variable scope.
 */

#include <stdio.h>

/* Function prototypes */

void display();

/*Gloal variable */

int firstnum = 10;

/* Main program */

int main() {
   int firstnum = 20;  /* declare and initialize  a local variable */
  
   printf("\nThe value of firstnum is %d", firstnum);
   display();

   return 0;
}


/*
 * Function: display
 * Usage: display()
 * ----------------
 * Display firstnum
 */

void display() {

   printf("\nThe value of firstnum is now %d\n", firstnum);
}
