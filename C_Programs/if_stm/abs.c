/*
* File: abs.c
* -----------
*  This program accepts an integer typed in from the terminal 
*  and then displays the absolute value of that integer.
*/

 
#include <stdio.h>

int main() {
   printf("Calculating the Absolute Value of an Integer.\n");

   int number;
   printf("Type in your number: ");
   scanf("%i", &number);

   if ( number < 0 ) {
     number = -number;
   }
   printf("The absolute value is %i\n", number);


   return 0;

}
