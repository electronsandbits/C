/*
 * File: leapYear.c
 * ----------------
 * This program reads in a year and determines whether it is 
 * leap year. A year is a leap year if it is divisible by four,
 * unless it is divisible by 100. Years divisible by 100 are 
 * leap years only if divisible by 400.
 */

#include <stdio.h>

int main() {
   printf("This program checks for leap years.\n");

   int year;
   printf("Enter year: ");
   scanf("%d",  &year);

   if  ((year % 4 == 0 && year % 100 != 0)  || year % 400 == 0) {
      printf("%d is a leap year \n", year );
   } else {
      printf("%d is not a leap year\n", year); 
   } 
  
   return 0; 
}

