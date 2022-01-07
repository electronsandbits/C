 /*
  * File: findMin.c
  * ---------------
  * This program finds the minimum value of an integer 
  * array of arbitrary  size.
  */
   
 #include <stdio.h>

/* Function prototypes */
int findMin(int [], int);

/* Constants */
 #define MAXELS 14

/* Main program */
int main() {
   int nums [MAXELS] = {13, 22, 18, 45, 21, 40, 24, 42, 7, 62, 70, 27, 16, 10};

   printf("The minimum value is %d\n", findMin(nums, MAXELS));
 
   return 0;
}

/*
 * Function: findMin()
 * Usage: findMin(vals, numels);
 * -----------------------------
 * The function expects the starting address
 * of an integer array and the number of elements
 * in the array as arguments. Then, using the number
 * of elements as the boundaries for its search, the
 * function's for loop causes each element to be examined
 * in sequential order to locate the maximum value.
 */

int findMin(int vals[], int numels) {
   int i, min = vals[0];

   for (i = 1; i < numels; i++) {
      if (min > vals[i]) {
        min = vals[i];
      }
   }
   
   return (min);
}
