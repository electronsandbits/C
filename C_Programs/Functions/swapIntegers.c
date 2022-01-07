/*
 * File:SwapIntegers.c
 * -------------------
 * This program illustrates the use of call by reference
 * to exchange the values of two integers.
 */

#include <stdio.h>

/* Function prototype */

void swap(int &x, int &y);

/* Main program */

int main () {
   int n1, n2;
   printf("Enter n1: ");
   scanf("%d", &n1);
   printf("Enter n2: ");
   scanf("%d", &n2);
   printf("The range is %d  to %d.\n", n1, n2); 

   return 0;

}

/*
* Function:swap
* Usage: swap(x, y);
* -----------------
* Exchanges the values of x and y. The arguments are passed
* by reference and can be therefore be modified. 
*/

void swap(int &x, int &y  {
   int tmp = x;
   x = y;     
   y = tmp;
} 

