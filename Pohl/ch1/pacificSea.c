/*
 * File: pacificSea.c
 * ------------------
 * The Santa Cruz campus of the University of California overloks
 * the Monterey Bay on the Pacific Ocean ans some of the ocean just to the 
 * northwest of the bay. We like to call this part of the ocean that is 
 * visible from the campus the "Pacific Sea". To illustrare how the #include
 * facility works, we will write a program that prints the area of the 
 * Pacific Sea in various units of measures. 
 */
 
#include <stdio.h>
#include "pacificSea.h"

/* Constants */

const int pacificSea = AREA;   /* in square kilometers */

/* Main program */

int main()  {
   double acres, squareMiles, squareFeet, squareInches;   

   printf("\nThe Pacific Sea covers an area");
   printf(" of %d square kilometers.\n", pacificSea);

   squareMiles  = SQ_MILES_PER_SQ_KILOMETERS * pacificSea;
   squareFeet   = SQ_FEET_PER_SQ_MILE * squareMiles;
   squareInches = SQ_INCHES_PER_SQ_FOOT  * squareFeet;
   acres        = ACRES_PER_SQ_MILE  * squareMiles;

  
   printf("In other units of measure this is:\n\n");
   printf("%22.7e acres\n", acres);
   printf("%22.7e square miles\n", squareMiles);
   printf("%22.7e square feet\n", squareFeet);
   printf("%22.7e square inches \n\n", squareInches);


   return 0;


}

