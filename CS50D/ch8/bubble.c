/*
 * File: bubbleSort.c 
 * ------------------
 * This program implements bubble sort algorithm, where sucessive
 * values in the list are compared, beginning with the first two elements.
 */

#include <stdio.h>


/* Function prototype */

int bubbleSort(int[], int);

/* Constants */

#define NUMEL 10

/* Main program */

int main() {
   int nums[NUMEL] = {22, 5, 67, 98, 45, 32, 101, 99, 73, 10};
   int i, moves;

   moves = bubbleSort(nums, NUMEL);


   printf("The sorted list, in ascending order, is:\n");
   for (i = 0; i < NUMEL; i++) {
      printf("%d ", nums[i]); 
   }
   printf("\n %d moves were made to sort this list\n", moves);

   return 0;
}


/* 
 * Function: bubbleSort
 * Usage: bubbleSort(num, numel);
 * ------------------------------
 * Returns the sorted list, in ascending order.
 */

int bubbleSort( int num[], int numel) {
   int i, j, temp, moves = 0;

   for (i = 0; i < (numel - 1); i++) {
      for ( j = 1; j < numel; j++) {
	if (num[j] < num [j -1]) {
	   temp = num[j];
	   num[j] = num[j - 1];
	   num[j- 1] = temp;
	   moves++;
	 }  
     }
   }
   return (moves);
}
