/*
 * File:dataTypes.c
 * ----------------
 * This program demonstrates types in C.
 */

#include <stdio.h>

  int main() {
   
     /* Variables declarations */     
     int x;
     float y;
     char c;

     /* Variable initializations */
     x = -4443;
     y = 554.21;
     c = 'M';

     /* Printing variable contents to standard output */
     printf("\nThe value of integer variable x is %d", x);
     printf("\nThe value of float variable y is %f", y);
     printf("\nThe value of character variable c is %c\n", c);


     /* Displaying Integer Data Types with printf() */
     printf("%d\n", 55);

     int operand;
     operand = 29;
     printf("The value of operand is %d\n", operand);

     /* Displaying Floating-Point Data Types with printf() */
     printf("%f\n", 55.55);

     float result;
     result = 3.123456;
     printf("The value of result is %f\n", result);

     printf("%.1f",   3.123456);
     printf("\n%.2f", 3.123456);
     printf("\n%.3f", 3.123456);
     printf("\n%.4f", 3.123456);
     printf("\n%.5f", 3.123456);
     printf("\n%.6f\n", 3.123456);

     /* Displaying Character Data Types With printf() */
     printf("%c\n", 'Y');

     char firstInitial;
     firstInitial = 'S';
     printf("The value of firstInitial is %c\n", firstInitial);

     char  middleInitial, lastInitial;
     firstInitial = 'W';
     middleInitial ='F'; 
     lastInitial = 'F';
     printf("My Initials are %c.%c.%c.\n" , firstInitial, middleInitial, lastInitial);

     return 0;

  }

    


 


