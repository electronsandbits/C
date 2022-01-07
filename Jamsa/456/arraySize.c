/*
 * File: arraySize.c
 * -----------------
 * This program uses the sizeof operator to determine the amount 
 * of storage for different arrays.
 */

#include <stdio.h>

int main() {
   int notas[100];
   float salar[100];
   char string[100];

   printf("Memoria para conter int notas[100] %d bytes\n", sizeof(notas));
   printf("Memoria para conter float salar[100] %d bytes\n", sizeof(salar));  
   printf("Memoria para conter char string[100] %d bytes\n", sizeof(string));
   
   return 0;
}
