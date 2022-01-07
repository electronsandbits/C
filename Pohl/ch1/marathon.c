/*
 * File:marathon.c
 * ---------------
 * This program convert the distance of a marathon in miles
 * and yards to kilometers. In english units, a marathon is defined 
 * to be 26 miles and 385 yards, these are integers. To convert miles
 * to kilometers, we  multiply by the conversion factor 1.609, a real
 * number.In memory, computers represent integers differently from reals.
 * To convert yards to miles, we divide by 1760.0.
 */

#include <stdio.h>

int main() {
   printf("The distance of a marathon in kilometers.\n");
   int miles, yards;
   float kilometers;

   miles = 26;
   yards = 385;
   kilometers = 1.609 * (miles + yards / 1760.0 );

   printf("\nA marathon is %f kilometers.\n\n", kilometers);

   return 0;

}
