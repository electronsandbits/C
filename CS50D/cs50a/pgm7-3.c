#include <stdio.h>

/*Function prototypes */
void teststat(); 


/* Main prototypes */
int main() {
   int count; /* count is a local auto variable */

   for (count = 1; count <= 3; count++)
      teststat();

   return 0;
}

void teststat() {
   static int num =0; /* num is a local static variable */
   printf("The value of the static variable num is now %d\n", num);
   num++;
}
