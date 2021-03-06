/* 
 * File: pgm8-2.c
 * --------------
 * This program  illustrates the I/O techniques using
 * an array named grades  defined to store five integers.
 * Included within the program is two for loops.
 * The first for loop is used to cycle through each
 * array element and allows  the  user to input individual
 * array values. The second for loop is used to display
 * the stored values. 
 * In this program each element's value is accumulated
 * in a total, which  is displayed upon completion of 
 * the individual display of each array element.
 */


#include <stdio.h>

/* Constants */

#define MAXGRADES 5

/* Main program */

int main() {
   int grades[MAXGRADES];
   int i, total = 0; 

  /* Input the grades */
  for (i = 0; i < MAXGRADES; i++)  {
     printf("Enter a grade: ");
     scanf("%d", &grades[i]);
     
   }

  /* Display and total the grades */
  printf("\nThe total of the grades ");
  for (i = 0; i < MAXGRADES; i++)  {
     printf("%d ", grades[i]);
     total += grades[i];
     
  }
  /* To ensure that the total been displayed only once */ 
  printf("is %d\n", total);  /* Display the total */
  
  return 0;
}
