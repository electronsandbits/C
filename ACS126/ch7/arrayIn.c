/*
 * File: arrayIn.c
 * ---------------
 * This program shows the manipulation of arrays in functions.
 */

#include <stdio.h>

/* Function prototypes */

void funcInput(int a[], int n);

/* Constants */

#define ARSIZE 5

/* Main program */

int main() {
   int i, x[ARSIZE];
   
   funcInput(x,ARSIZE); /*Function's Call */

   printf("The numbers entered are: ");
   for (i = 0; i < ARSIZE; i++) {
      printf("%d\n     ", x[i]);
   }
   return 0;
}


/* 
 * Function:funcInput(y, n)
 * Usage:
 * -------------------------
 * Array input using array index
 */

void funcInput(int y[], int n) {
   int i;
  
   printf("Please enter the numbers: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &y[i]);
   }
   return; 

}
