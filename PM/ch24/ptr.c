/*
 * File: ptr.c
 * -----------
 * This program shows how pointers variabs works.
 */

#include <stdio.h>

int main()  {
   int age;
   int *pAge;
   age = 19;
   pAge = &age;
   
   printf("The age is %d.\n", age);
   printf("The age is %d.\n", *pAge);
   
   age = 25;
   *pAge = 25;
   printf("The age is %d.\n", age);
   printf("The age is %d.\n",*pAge);

   return 0;
}
