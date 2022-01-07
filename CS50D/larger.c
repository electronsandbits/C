/*
 * File:Larger.c
 * -------------
 * This program asks the user to enter two integers.
 * And the program then decides which one of the numbers is the largest.
 * The program uses an if statement to choose the largest number.
 */

#include <stdio.h>


/* Function prototypes */

int max(int x, int y);
void isLarger(int big);

/* Main program */

int main() {
   printf("Program to print th larger number\n");
   int a, b, larger;

   printf("Type two integers separated by a space: ");
   scanf("%d %d", &a, &b);
   larger = max(a, b);   /* Function's call */

   if (a == larger) {
     isLarger(a);
   } else {
     isLarger(b);
   }
   return 0;
}

/* 
 * Function: max
 * Usage:larger= max (a, b);
 * --------------------------
 * Returns the largest number.
 */

int max (int x, int y) {
   if (x > y)
     return(x);
   return(y);
}


/* 
 * Function:isLarger
 * Usage:if(isLarger(big))...
 * -----------------------------
 * This function returns true if big is the larger number.
 */

void isLarger(int big) {
   printf("Value %d is larger.\n", big);
} 
