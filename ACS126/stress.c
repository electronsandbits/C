/*
 * File: stress.c 
 * --------------
 * This program computes the compression stress
 * in a steel column.
 */


#include <stdio.h>


/* Constants */

const float PI = 3.141593;

/* Main program */

int main() {
   float area, stress;
   int diam, p;
 
   printf("Input the Compression Load");
   printf("and Diameter of the Column:\n");
   scanf("%d    %d", &p, &diam);
  
   if (p > 0 && diam > 0 ) {
     printf("\n\nCompression Load: %d pounds\n", p);
     printf("Diameter of the Steel Column: %2d inches\n", diam);

     area = PI * ((diam * diam) / 4.0 );
     stress = p / area;

     printf("Compression Stress: %7.2f pounds per square inch\n", stress);

   }

   return 0;
}
