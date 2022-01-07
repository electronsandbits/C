/*
 * File: pgm7-2.c 
 * --------------
 * This program demonstrates local variable storage class.
 * Each time the testauto() is called, the automatic variable
 * num is created and initialized to 0. When the function returns 
 * control to main(), the variable num is destroyed along with any
 * value stores in num.Thus,, the effect os incrementing num in 
 * testauto(), before the function's return stament, is lost when 
 * control is returned to main().
 */


#include <stdio.h>

/* Function prototypes */

void testauto(); 


/* Main program */

int main() {
   int count; /* create the auto variable count */

   for(count = 1; count <= 3; count++)

   testauto(); /* Function's call */

   return 0;
}

/*
 * Function: testauto
 * Usage: testauto()
 * -----------------
 * 
 */

void testauto() {
   int num = 0;  /* create the auto variable num  and initialize to zero */

   printf("The value of the automatic variable num is %d\n", num);
   num++;
}
