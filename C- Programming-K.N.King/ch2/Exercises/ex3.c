/*
 * File: dweight2.c
 * ---------------
 * This program is a condensed version of dweight.c
 */

#include <stdio.h>

int main() {
   int height = 8; length = 12; width = 10; volume;

   volume = heigth * length * width;
   printf("Dimensions: %dx%dx%d\n", length, width, height);
   printf("Volume (cubic inches): %d\n", volume);
   printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

   return 0;
}
