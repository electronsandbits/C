/* 
 * File: pgm7-6.c 
 * --------------
 * This program illustrates passing addresses to a function.
 */

#include <stdio.h>

/* Function prototypes  with a pointer parameter */
   void newval(float *); 
   

int main() {

   float testval;
  
   printf("\nEnter a number: ");
   scanf("%f", &testval);

   printf("The address that will be passed is %u\n\n", &testval);
   newval(&testval);   /* call the function */

   return 0;
}

/*
 * Function:newval
 * ---------------
 * Function header using a pointer parameter
 */

void newval(float *xnum) {
   printf ("The address received is %u\n", xnum);
   printf("The value pointed to by xnum is: %5.2f \n", *xnum );
}
