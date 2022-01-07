#include <stdio.h>


/* Function prototypes */

void teststat(); 

/* Main program */

int main() {
   int count; /* create the auto variable count */
   for (count = 1; count <= 3; count++)
      teststat(); /* Calling the function */

   return 0;
}

void teststat() {
  int num = 0; /* create the auto variable num */
               /* and initialize to zero */

  printf("The value of the automatic variable num is %d\n", num);
  num++;
}
