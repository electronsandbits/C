/*
 * File: fahr3.c
 * -------------
 * This program uses a for loop to print the fahrenheit table
 * in reverse order - K&R EXERCISE 1.5.
 */



#include<stdio.h>

/* Constants */

#define LOWER 0
#define UPPER 300
#define STEP 20

int main ()   {

   printf("FAHR CELSIUS\n");
   printf("---- -------\n");
   int fahr;
   for (fahr = UPPER; fahr >= LOWER; fahr-= STEP) {
      printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  
   }
   return 0;

}
