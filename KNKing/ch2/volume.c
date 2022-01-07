/* 
 * File: volume.c 
 * ---------------
 * This program computes the dimensional weight of a box.
 */

#include <stdio.h>

/* Constans */

#define INCHES_PER_POUND 166

int main () {
   printf("Computes the dimensional weight of a 12x10x8 box\n");
   int height, length, width, volume, weight;
 
   height = 8;
   length = 12;
   width  = 10;
   volume = height * length * width;
   weight = (volume + 165) / INCHES_PER_POUND;
  
   printf("Dimensions: %dx%dx%d\n", length, width, height);
   printf("Volume (cubin inches): %d\n", volume);
   printf("Dimensional weight(pounds): %d\n:", weight);

   return 0;

}


