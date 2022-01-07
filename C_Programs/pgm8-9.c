/* 
 * File: pgm8-9.c
 * --------------
 * This program  illustrates passing  a local , two-dimensional array 
 * into a function  that displays the array's values. 
 */

#include <stdio.h>
#define ROWS 3
#define COLS 4


/* Function prototypes */

void display(int [ROWS][COLS]); 

/* Main Program */
int main()  {
   int val[ROWS][COLS] = {8,16,9,52,
                         3,15,27,6,
                         14,25,2,10};

  display(val);

  return 0;
}
/* 
 * Function: display
 * -----------------
 * 
 */

void display(int nums[ROWS][COLS]) {
  int rowNum, colNum;

  for (rowNum = 0; rowNum < ROWS; rowNum++)   {
     for (colNum = 0; colNum < COLS; colNum++)
        printf("%4d",nums[rowNum][colNum]);
     printf("\n");
  }
}
