/*
 *File:SumNumbers.c
 * This program find  the sum of the numbers from 1 through 100 by generating them and adding them.
 *
 */


#include <stdio.h>
int main () {

   int sum, number;
   sum = 0;
   number = 1;

   while(number <= 101) {

       sum = sum + number;
       number  = number + 1;
   }
   printf("%d\n", sum);

   return 0;

}
