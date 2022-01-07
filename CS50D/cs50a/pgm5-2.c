#include <stdio.h>

int main() {
   int i;
  
   i = 10;
   while (i >= 1) {
      printf("%d ", i);
      i--; /* subtract 1 from i */
   }
   printf("\n");  /* print a blank line */

   return 0;
}
