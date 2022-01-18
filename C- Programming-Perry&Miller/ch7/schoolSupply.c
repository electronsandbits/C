/*
 * File: family.c
 * --------------------
 * This a sample program that lists three kids and their school
 * supply needs, as well as cost to buy the supplies.
 */

#include <stdio.h>
#include <string.h>
#include "header.h"

int main() {
   int age;
   char childName[14]  = "Thomas";

   printf("\n%s have %d  kids. \n", FAMILY, KIDS);

   age = 11;
   printf("The oldest, %s, is %d.\n", childName, age);

   strcpy(childName, "Christopher");
   age = 6;
   printf("The middle boy, %s, is %d.\n", childName, age);

   age = 3;
   strcpy(childName, "Benjamin");
   printf("The youngest, %s, is %d.\n", childName, age);

   return 0;

}
