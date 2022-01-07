/*
 * File:scores.c
 * -------------
 * This program reads in seven scores, sorts them, and
 * prints them out in order.
 * A bubble sort is used in the program to sort the scores.
 * This construction is typically done with the nested for loops, with
 * a test made in the body of the inner loop to check on the order of 
 * a pair of elements. If the elements being compared are out od order,
 * their values are interchanged. 
 */

#include <stdio.h>

/* Constants */

#define CLASS_SIZE 7

/* Main program */

int main () {
   int i, j, score[CLASS_SIZE], sum = 0, temp;
   
   /* Input the scores */
   printf("Input %d scores:   ", CLASS_SIZE);
   for (i = 0; i < CLASS_SIZE; ++i) {
      scanf("%d", &score[i]);
      sum += score[i];
   }
   
   /* Sorting algorithm */
   for (i = 0; i < CLASS_SIZE - 1; ++i) {      /* bubble sort */
      for (j = CLASS_SIZE - 1; j > i; --j) {
         if (score[j - 1] < score [j]) {       /* check the order */
           temp = score[j - 1];                /* interchange takes place here */
           score[j - 1] = score[j];            /* overwritten with the original value of score[i] */  
           score[j] = temp;	               /* the value of score[j] is being overwritten with the original value of score[i] */   
         }
      } 
   }
   
   /* Display and average the scores */
   printf("\nOrdered scores:\n\n");
   for (i = 0; i < CLASS_SIZE; ++i) {
      printf("     score[%d] = %5d\n", i , score[i]);	   
   }
   printf("\n%18d%s\n%18.1f%s\n\n", sum, " is the sum of all the scores",
        (double) sum / CLASS_SIZE, " is the class average");

   return 0;
} 


