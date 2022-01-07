/* 
 * File: pgm4-3.c
 * ..............
 * This program converts temperature between 
 * Celsius and Fahrenheit scales.
 */

#include <stdio.h>

int main() {
   char tempType;
   float temp, fahren, celsius;

   printf("Enter the temperature to be converted: ");
   scanf("%f",&temp);
   printf("Enter an f if the temperature is in Fahrenheit\n");
   printf("or a f if the temperature is in Celsius: ");
   scanf("\n%c", &tempType);  

   if  (tempType == 'f')  {
      celsius = (5.0 / 9.0) * (temp - 32.0);
      printf("\nThe equivalent Celsius temperature is %6.2f\n", celsius);
   } else {
      fahren = (9.0 / 5.0) * temp + 32.0;
      printf("\nThe equivalent Fahrenheit temperature is %6.2f\n", fahren);
   }
   return 0;
}	
