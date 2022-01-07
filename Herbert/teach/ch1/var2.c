/*
 * File: variable2.c
 * -----------------
 *  This program, creates variables of types char, float, and double;
 *  assigns each a value, and outputs these values to the screen.
 */


#include <stdio.h>


int main() {
   char ch;
   float f;
   double d;

   ch = 'X';
   f = 100.123;
   d = 123.009;

   printf("ch is %C\n", ch);
   printf("f is %f\n" , f);
   printf("d is %f\n",  d);


   return 0;

 
}
