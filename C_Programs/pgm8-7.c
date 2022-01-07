#include <stdio.h>
#define NUMROWS 3
#define NUMCOLS 4


int main() {
   int val[NUMROWS][NUMCOLS] = {8,16,9,52,3,15,27,6,14,25,2,10};
   int i, j;
   printf("\nDisplay of val array by explicit element");
   printf("\n%2d %2d %2d %2d",
         val[0][0],val[0][1],val[0][2],val[0][3]);
   printf("\n%2d %2d %2d %2d",
         val[1][0],val[1][1],val[1][2],val[1][3]);
   printf("\n%2d %2d %2d %2d",
         val[2][0],val[2][1],val[2][2],val[2][3]);

   printf("\n\nDisplay of val array using a nested for loop");
   for (i = 0; i < NUMROWS; i++) {
      printf("\n"); /* start a new line for each row */
   
      for (j = 0; j < NUMCOLS; j++) 
         printf("%2d ", val[i][j]);
    }
   printf("\n");

   return 0;
}
