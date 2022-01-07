#include <stdio.h>
#define NUMROWS 3
#define NUMCOLS 4

int main() {
   int val[NUMROWS][NUMCOLS] = {8,16,9,52,3,15,27,6,14,25,2,10};
   int i, j;

  /* multiply each element by 10 and display it */
  printf("\nDisplay of multiplied elements\n");

  for (i = 0; i < NUMROWS; i++)  {
     printf("\n"); /* start a new line */
     for (j = 0; j < NUMCOLS; ++j) {
        val[i][j] = val[i][j] * 10;
        printf("%3d ", val[i][j]);
     } 
   } 
   printf("\n");

   return 0;
}
