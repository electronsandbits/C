/*
 * File: thing.c
 * -------------
 * This program illustrates the simple  use of pointers.
 */

#include <stdio.h>

int main() {
   int thingVar;    /* define a variable for thing */
   int *thingPtr;   /* define a pointer to thing */      


   thingVar = 2;    /* assigning a value to thing */
   printf("Thing %d\n", thingVar);

   thingPtr = &thingVar;  /* make the pointer point to thing */
   *thingPtr = 3; /* thingPtr points to thingVar so thingVar changes to 3 */ 

   printf("Thing %d\n", thingVar);

   return 0;
   
}
