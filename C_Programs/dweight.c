/* 
 * File: volume.c 
 * ---------------
 * This program computes the dimensional weight
 * of a box from input provided by the user.
 */

#include <stdio.h>


/* Constans */
#define INCHES_PER_POUND 166

int main () {
   int height, length, width, volume, weight;
 
   printf("Enter height of box: ");
   scanf("%d", &height);
   printf("Enter lenght of box: ");
   scanf("%d", &length);
   printf("Enter width of box: ");
   scanf("%d", &width);
   volume = height * length * width;
   weight = (volume + 165) / INCHES_PER_POUND;
  
   printf("Volume (cubic inches): %d\n", volume);
   printf("Dimensional weight(pounds): %d\n:", weight);

   return 0;

}
