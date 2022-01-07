
/* 
 * File: pgm8-1.c
 * --------------
 * This program  illustrates the I/O techniques using an array named grades
 * defined to store five integers. Included within the program is two for loops.
 * The first for loop is used to cycle through each array element and allows  the 
 * user to input individual array values. The second for loop is used to display
 * the stored values.
 */

#include <stdio.h>

/* Constants */

#define MAXGRADES 5

/* Constants */

int main() {
   int grades[MAXGRADES];
   int i;

  /* Input the grades */
  for (i = 0; i < MAXGRADES; i++)  {  
     printf("Enter a grade: ");
     scanf("%d", &grades[i]);
  }

  /* Display the grades */
  for (i = 0; i < MAXGRADES; i++) {
     printf("grades %d is %d\n", i, grades[i]);
  }   
  return 0;
}
