/*
 * File:ptrToVoid.c
 * ----------------
 * This program demonstrates pointer to void .
 */

#include <stdio.h>

int main() {
   int num;
   int *pi = &num;
   printf("Value of pi: %d\n", pi);
   void*  pv = pi;
   pi = (int*) pv;
   printf("Value of pi: %d\n", pi);


   return 0;

                   


}

