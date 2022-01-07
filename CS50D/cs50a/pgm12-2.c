/*
 * File: pgm12-2.c
 * ---------------
 *
 */

#include <stdio.h>

struct Date {
  int month;
  int day;
  int year;
};

int main() {
   struct Date birth;
     birth.month = 1;
     birth.day = 4;
     birth.year = 2015;
     printf("My birth date is %d/%d/%d\n",
     birth.month, birth.day, birth.year );

   return 0;
}
