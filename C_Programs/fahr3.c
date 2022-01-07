/*
 * File: fahr3.c
 * -------------
 * This program uses a for loop to print the fahrenheit table.
 */



#include<stdio.h>


int main ()   {

   printf("FAHR CELSIUS\n");
   printf("---- -------\n");
   int fahr;
   for (fahr = 0; fahr <= 300; fahr+= 20) {
      printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  
   }
   return 0;

}
