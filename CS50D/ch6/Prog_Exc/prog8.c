/*
 * File:prog1.c 
 * ------------
 * This program determines whether and 
 * integer value typed in by the user is even or odd
 * and displays an appropriate message at the terminal.
 */


#include <stdio.h>


/* Function prototypes */

void isEven(int n  );

/* Main program */

int main() {
   int number;
 
   printf("Enter a number:");
   scanf("%d",  &number);


   isEven( number); /* Function's call */

   return 0;

}


/*
 * Function: isEven
 * Usage: if (isEven(i));
 * ----------------------
 * Returns the message indicating whether the entered 
 * number is even or odd.
 */


void isEven( int n) {
   int num, r;

   r = num % 2;

   if  (r == 0) {
      printf("The number is even.\n");
   } else {
       printf("The number is odd.\n");
   } 

}
