/*
 * File: pgm7-5.c 
 * --------------
 * This program illustrates declaring and  using pointers.
 * In particular this program  shows how a pointer is used
 * to change the value in the "pointed to" location.
 */

#include <stdio.h>

int main() {
   int *milesAddr;  /* Declare a pointer to an int */
   int miles;       /* Declare an integer variable */

   miles = 22;      /* Store the number 22 into miles */

   /* Pointer declaration */
    milesAddr = &miles; /* Store the 'address of miles' in milesAddr */
   
   printf("The Address stored in milesAddr is %u\n", milesAddr);
   printf("The value pointed to by milesAddr is %d\n\n", *milesAddr);

   *milesAddr = 158; /* Set the value pointed to by milesAddr to 158 */
   printf("The value in miles is now %d\n", miles);


   return 0;

} 
