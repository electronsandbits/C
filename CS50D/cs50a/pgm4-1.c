/* 
 * File :pgm4-1.c
 * ..............
 * This programs checks a car's mileage and prints a 
 * message if the car has been driven more than 3,000 miles.
 */
 
#include <stdio.h>

/* Constants */

#define LIMIT 3000.0

/* Main program */

int main() {
   int idNum;
   float miles;

   printf("Please type in car number and mileage: ");
   scanf("%d %f", &idNum, &miles);

   if (miles > LIMIT) {
     printf("Car %d is over the limit.\n", idNum);
   }
   printf("End of program output.\n");

   return 0;
}
