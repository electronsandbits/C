/*
 * File: linearSearch.c
 * --------------------
 * This program illustrates linear search algorithm.In linear 
 * search, the search begins at the first item and continues 
 * sequentally, item by item, through the list.
 */
 
 
#include <stdio.h>


/* Function prototypes */

int linearSearch (int [], int, int);


/* Constants */

#define TRUE 1
#define FALSE 0
#define NUMEL 12


/* Main program */

int main() {
   int nums[NUMEl] = {12, 24, 36, 48, 60, 72, 84, 96, 108, 120, 132, 144};
   int item, location;

   printf("Enter the item you are search for: ");
   scanf("%d", &item);

   location  = linearSearch (nums, NUMEL, item); /* Function's call */


   if  (location >  -1) {
      printf("The item was found at index location %d\n", location);
   } else {
      printf("THe item was not found int the list\n");
   }

   return 0;

}

/* 
 * Function:
 * Usage : linearSearch(list[], size, key);
 * ----------------------------------------
 * This function returns the location of key in the list
 * a -1 is returned if the value is not found.
 */

linearSearch(int list[], int size, int key) {
   int index, found, i;
   index = -1;
   found = FALSE;

   i = 0;
   while (i < size && !found) {
      if (list[i]  == key) {
        found = TRUE;
	index = i;
      }
      i++;  /* move to next item in the list */
   }
   return (index);

}
