/*
 * File:volumePool.c
 * ----------------- 
 * 
 * This program calculates the volume of a pool, given its 
 * length, width, and depth.
 */



#include <stdio.h>
int main () {
  
   int length, width, depth, volume;

   length = 25;
   width = 10;
   depth = 6;
   

   volume = length * width * depth;
   printf("The volume of the pool in ft is %d\n", volume);

   return 0;
}
