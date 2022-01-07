/*
 * File: binarySearch.c 
 * --------------------
 * This program illustrates the binary search algorithm.
 * In a binary search, the list must be in a sorted order.
 * Starting with an ordered list, the desired item is first compared
 * to the element in the middle of the list.
 * There are 3 possible cases.
 * 1. The desired item may be equal to the middle element.
 * 2. It may be greater than the middle element, or 
 * 3. It may be less than the middle element. 
 */

#include <stdio.h>


/* Function prototypes */

int binarySearch (int [], int , int);


/* Constants */

#define NUMEL 12
#define TRUE 1
#define FALSE 0

/* Main program */

int main () {
   int nums [NUMEL] = {24, 36, 12, 60, 48, 72, 96, 108, 120, 84, 132, 144};
   int item, location;

   printf("Enter the item you are searching for: ");
   scanf("%d", &item);


   location = binarySearch(nums, NUMEL, item); /* Function's call */


   if  (location > - 1) {
      printf("The item was found at index location %d\n", location);
   } else {
      printf("The item was not found in the list\n");
   }

   return 0;

}


/*
 * Function: binarySearch
 * Usage: binarySearch(list[], size, key);
 * ---------------------------------------
 * This function returns the location of key in the list
 * a -1 is returned if the value is not found.
 */

 binarySearch (int list[], int size, int key) {
   int index, found, left, right, midpt;

   index = -1;
   found = FALSE;
   left = 0;
   right  = size -1;

   while ( left <= right && !found) {
      midpt = (int) (( left + right ) / 2);
      if  (key == list[midpt]) {
  	 found = TRUE;
	 index = midpt;
      } else if (key > list[midpt]) {
         left = midpt + 1;
      } else {
         right = midpt - 1
;
      }
    }
    return (index);
}

