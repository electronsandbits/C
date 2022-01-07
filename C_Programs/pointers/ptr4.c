/*
 * File: ptr4.c
 * ------------
 * This program illustrates pointer assignment.
 */

#include <stdio.h>

int main()  {
   int i, j , *p, *q;
   i = 22;
   j = 44;
   
  /* Pointer assigment */
   p = &i; 
   q = &j;
   //q = p;

   /* Display the value of both i and j */
   printf("The value of i is %d\n", *p);
   printf("The value of j is %d\n", *q);
   

   *p = 13;
   *q = 120;
  // *p = *q;

   printf("The new  value of i is %d\n", *p);
   printf("The new  value of j is %d\n", *q);
 
   return 0;
}
