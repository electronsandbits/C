/* 
 * File: temperature.c 
 * -------------------
 * This program illustrates using a compound statement within 
 * an if-else statement. The program checks whether the value
 * in tempType is f. If the value is an f, the compound statement
 * corresponding to the if part of the if-else statement.
 * 
 */

#include <stdio.h>

int main() {
   printf("This program converts from one temperature to another.\n"); 
   
   char tempType;
   float temp, fahren, celsius;

   printf("Enter the temperature to be converted: ");
   scanf("%f", &temp);
   printf("Enter an f if the temperature is in Fahrenheit\n");
   printf("or a c if the temperature is in Celsius: ");
   scanf("\n%c", &tempType);

   if  (tempType == 'f') {
      celsius = (5.0 / 9.0 ) * (temp - 32.0);
      printf("\nThe equivalent Celsius temperature is %6.2f\n", celsius);
   } else {
      fahren = (9.0 / 5.0) * temp + 32.0;
      printf("\nThe equivalent Fahrenheit temperature is %6.2f\n", fahren);
   }

   return 0;
}
  
