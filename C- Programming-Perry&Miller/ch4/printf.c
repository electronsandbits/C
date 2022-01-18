/*
 * File: sample.c
 * --------------
 *  This programs illustrates the use of printf().
 */

#include <stdio.h>

int main() {
   printf("My favorite munbers are: %d, %d, %d, %d\n", 7, 14, 21, 12);
   printf("You are on your way to C mastery\n");
   printf("\n");

   printf("Write code");
   printf("Learn C");
   printf("\n");

   printf("Write code\n");
   printf("Learn C");
   printf("\n");

   printf("Write code\nLearn C");
   printf("\n");


   printf("%d roses  cost  %2f per %d\n", 24, 19.95, 12);
   printf("\n");

   printf("%s %d %f %c\n", "Sam", 14, -8.76, 'X');
   printf("\n");

   printf("%f %.3f  %.2f % .1f\n", 4.5678, 4.5678, 4.5678, 4.5678);
   
   return 0; 
}

