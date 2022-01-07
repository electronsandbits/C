/*
 * File:mileToKm
 * -------------
 *  This program converts distance in miles to kilometers.
 */

#include <stdio.h>

/* Constants */

#define KMS_PER_MILE 1.609


/* Main program */

int main() {
   double miles, kms;


   printf("Converts distance in miles to kilometers.\n");

   /* Get the distance im miles. */
   printf("Enter the distance in miles: ");
   scanf("%lf", &miles);

   /* Convert the distance to kilomenters */
   kms = KMS_PER_MILE * miles;

   /* Display the distance in kilometers */
   printf("That equals %f kilometers.\n", kms);

   return 0;
}

