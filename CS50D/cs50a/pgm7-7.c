/*
 * File: pgm7-7.c 
 * --------------
 * This
 */

#include <stdio.h>

/*Function  prototypes  with a pointer parameter */

void newVal(float *);  

/* Main program */

int main() {

   float testVal;

   printf("\nEnter a number: ");
   scanf("%f", &testVal);

   printf("\nFrom main(): The value in testval is: %5.2f \n",                                                                      testVal);
   newVal(&testVal);   /* call the function */

   printf("\nFrom main(): The value in testval has been changed to: %5.2f \n", 
                                                        testVal);

   return 0;
}
/*
 * Function: newVal 
 * ----------------
 */
void newVal(float *xnum) {
  printf("\nFrom newVal(): The value pointed to by xnum is: %5.2f \n", *xnum);                                 
  *xnum = *xnum + 20.2;
}
