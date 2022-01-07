/* 
 * File: array3.c 
 * ---------------
 * This program show the input of parallel arrays.
 */


#include <stdio.h>


/* Constants */

#define ARR 5

/* Main Program */

int main() {
  int i;
  int x[ARR], y[ARR];


  for (i = 0; i < ARR; i++) { 
     printf("Enter the x values: ");
     scanf("%d", &x[i]);
  } 
  for (i = 0; i < ARR; i++) {
     printf("Enter the y values: ");
     scanf("%d", &y[i]);
     
  }
  printf("%d, %d", x[i], y[i]);
  
  printf("\n");
  return 0;

}
