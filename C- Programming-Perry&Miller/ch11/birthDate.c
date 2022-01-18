/*
 * File:birthDate.c
 * ----------------
 *  This program asks the user for their birth year and 
 *  calculates how old they will in the current year.( It also checks to 
 *  make sure a future year has not been entered.). It then tells the user
 *  if they were born in a leap year.
 */

#include <stdio.h>

/* Constant */

#define CURRENT_YEAR 2021

/* Main Program */

int main() {
   int yearBorn, age;

   printf("What year were you born?\n");
   scanf("%d", &yearBorn);
   
   /* This if statement can do some data validation, making sure the year makes sense 
    * The statements will only execute if the year is after the current year 
    */ 

   if (yearBorn > CURRENT_YEAR) {
     printf("Really? You haven't been born yet?\n");
     printf("Congratulations on time travel!\n");
     
   } else {
      
           
      
   
           
           

   age = CURRENT_YEAR - yearBorn;
   printf("\nSo this year you will turn %d on your birthday!\n", age);

   /* The second if statement uses the modulus operator to test if 
    * the year of birth was a Leap Year. Again, only if it is  will the code execute
    */

   if (( yearBorn % 4 ) == 0 ) {
     printf("\nYou were born in a Leap Year-- cool !\n");
   }


  }
    
   return 0;
}

