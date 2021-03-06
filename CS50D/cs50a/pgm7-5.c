/*
 * File:pgm7-5.c
 * -------------
 * This program show how a pointer is used to change the value 
 * in the "pointed" to location.
 */ 

#include <stdio.h>


int main() {
   int *milesAddr; /* declare a pointer to an int */
   int miles;      /* declare an integer variable */

   miles = 24; /* store the number 22 into miles */

   milesAddr = &miles; /* store the 'address of miles' in milesAddr */
   printf("The address stored in milesAddr is %u\n", milesAddr);
   printf("The value pointed to by milesAddr is %d\n\n", *milesAddr);

   *milesAddr = 712; /* set the value pointed to by milesAddr to 158 */
   printf("The value in miles is now %d\n", miles);

   return 0;
}
