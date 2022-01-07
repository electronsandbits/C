/*
 * File:struct.c
 * -------------
 * This program illustrates the process of assigning
 * values to the individual members of the birth structure.
 */

#include <stdio.h>

int main() {
   
   struct {
      int month;
      int day;
      int year;
   }  birth;

   birth.month = 8;
   birth.day = 20;
   birth.year = 80;
   printf("My birth date is %d/%d/%d\n", 
	   birth.month, birth.day, birth.year);

   return 0;

}

