#include <stdio.h>


/* Function prototypes */

void teststat(); 

/* Main Program */

int main() {
   int count; /* count is a local auto variable */

   for (count = 1; count <= 3; count++)
  
   teststat(); /* Function's call */

   return 0;
}

/*
 * Function: teststat
 * Usage: teststat
 * -------------------
 */

void teststat() {

   static int num = 0; /* num is a local static variable */

   printf("The value of the static variable num is now %d\n", num);
   num++;
}
