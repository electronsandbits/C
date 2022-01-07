/*
 * File: Ch5ex1.c
 * --------------
 * This program lists three kids and their 
 * school supply needs, as well as cost to buy the supplies.
 */

#include <stdio.h>

int main (void) {
   char firstInitial, middleInitial;

   int numberOfPencils;
   int numberOfNotebooks;

   float pencils = 0.23;
   float notebooks = 2.89;
   float lunchBox = 4.99;
   
   /* Information for the first child */

   firstInitial = 'S';
   middleInitial = 'N';

   numberOfPencils = 7;
   numberOfNotebooks = 4;

   printf("%c%c needs %d pencils , %d notebooks, and 1 lunchBox\n", 
         firstInitial, middleInitial, numberOfPencils, numberOfNotebooks);
   printf("The total cost is $%.2f\n\n", numberOfPencils * pencils +
	  numberOfNotebooks * notebooks + lunchBox);

   /* Information for the second child */

   firstInitial = 'W';
   middleInitial = 'F';

   numberOfPencils = 10;
   numberOfNotebooks = 3;

   printf("%c%c needs %d pencils , %d notebooks, and 1 lunchBox\n", 
         firstInitial, middleInitial, numberOfPencils, numberOfNotebooks);
  
   printf("The total cost is $%.2f\n\n", numberOfPencils * pencils +
	  numberOfNotebooks * notebooks + lunchBox);

  /* Information for the third child */

   firstInitial = 'M';
   middleInitial = 'T';

   numberOfPencils = 9;
   numberOfNotebooks = 2;

   printf("%c%c needs %d pencils , %d notebooks, and 1 lunchBox\n", 
          firstInitial, middleInitial, numberOfPencils, numberOfNotebooks);
   printf("The total cost is $%.2f\n\n", numberOfPencils * pencils +
	  numberOfNotebooks * notebooks + lunchBox);

   return 0;

}
