/*
 * File: selectionSort.c 
 * ---------------------
 * This program implements selection sort. In a selection sort
 * the smallest value is initially selected from the complete 
 * list of data and exchanged with the first element in the list.
 */ 

#include < stdio.h>


/* Function prototypes */

int selectionSort(int [], int);


/* Constants */

#define NUMEL 12


/* Main program */

int main() {
   int nums[NUMEL] =  {12, 24, 36, 48, 60, 72, 84, 96, 108, 120, 132, 144};
   int i, moves;

   moves = selectionSort(nums,NUMEL); /* Function's call */
  
   printf("The sorted list, in ascending order, is:\n");
   for ( i = 0; i < NUMEL; i++) {
     printf("%d", nums[i]);
   }
   printf("\n %d moves were made to sort this list\n", moves);

   return 0;
}


/* 
 * Function: selectionSort
 * Usage: selectionSort(num, numel);
 * ---------------------------------
 * Returns the sorted list.
 */

int selectionSort(int num[], int numel) {
   int i, j, min, minidx, temp, moves = 0;

   for (i = 0; i < (numel - 1); i++)  {




   }






}
