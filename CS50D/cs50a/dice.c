/*
 * File:dice.c
 * -----------
 * This program 
 * 
 */


#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {
   int nrolls = 0;

   while (1) {
      int val = rand() % nrolls;
      if (val == 4) break;
      nrolls++;
    }
    printf("It took %d tries to rool a 4.\n", nrolls);
  
    return 0;
}
