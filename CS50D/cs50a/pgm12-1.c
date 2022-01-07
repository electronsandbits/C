/* 
 * File: pgm12-1.c 
 * ---------------
 *
 *
 */


#include <stdio.h>

int main() {
   struct {
     int month;
     int day;
     int year;
   } birth;

   birth.month = 8;
   birth.day = 20;
   birth.year = 1980;
   printf ("My birth date is %d/%d/%d\n",
             birth.month, birth.day, birth.year % 100);

   return 0;
 }
