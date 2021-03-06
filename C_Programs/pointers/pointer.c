/*
 * File:pointer.c
 * --------------
 * This program illustrates how to display pointer values.
 */

#include <stdio.h>

int main () {
   int num = 0;
   int *pi = &num;


   //printf("Address of num: %d   Value: %d\n", &num, num);
   // printf("Address of pi:  %d   Value: %d\n", &pi, pi);
   
   printf("Address of pi:  %d   Value: %d\n", &pi, pi);  
   printf("Address of pi:  %x   Value: %x\n", &pi, pi);
   printf("Address of pi:  %0   Value: %0\n", &pi, pi);
   printf("Address of pi:  %p   Value: %p\n", &pi, pi);

   return 0;
} 
