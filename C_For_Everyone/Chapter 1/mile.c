/*
 * File: mile.c
 * ------------
 * This program prints a table of conversion from 
 *  miles to kilometers.
 */

#include <stdio.h>


/* Constants */

#define END 90
#define INCREMENT 5

int main(){
   int miles = 20;

   printf("MIles to Kilometers conversion\n");
   while (miles <= END){
      int kilometers = miles * 1.60934;
      printf("%d\t%d\n", miles, kilometers);
      miles+= INCREMENT;
   }
   printf("end\n");
   return 0;

}

