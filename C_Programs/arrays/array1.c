/*
 * File:array.c
 * ------------
 * This program  illustrates the input/output techniques
 * each element's value is accumulated in a total, which 
 * is displayed upon completion of the individual display of each 
 * array element. 
 */
 #include <stdio.h>

/* Constants */

#define MAXGRADES 7

/* Main program */

int main() {
   int grades[MAXGRADES];
   int i, total = 0;

   /* Input the grades */
  for (i = 0; i < MAXGRADES; i++) {
     printf("Enter a grade: ");
     scanf("%d", &grades[i]);
  }

  /* Display and total the grades */
  printf("\nThe total of the grades ");
  for (i = 0; i < MAXGRADES; i++) {
     printf("%d ", grades[i]);
     total += grades[i];

 }
 printf("is %d\n", total); /* display the total */


 return 0;

}

