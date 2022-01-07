/*
 * File: arithmetic.c
 * ------------------
 *  This program illustrates sampling and floating point operations.
 */

#include <stdio.h>

int main() {
   int adccount = 2048;
   float vtemp;
   float tempc;
   vtemp = adccount/4095 * 1.5;
   tempc = (vtemp-0.986)/0.00355;
   printf("vtemp: %f\n", vtemp);
   printf("tempc: %f\n", tempc);

   return 0;
}
