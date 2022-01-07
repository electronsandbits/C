#include <stdio.h>

int main() {

   float grade1;   /* declare grade1 as a float variable */
   float grade2;   /* declare grade2 as a float variable */
   float total;    /* declare total as a float variable */
   float average;  /* declare average as a float variable */

   grade1 = 85.5f;
   grade2 = 97.0f;
   total = grade1 + grade2;
   average = total / 2.0; 
   printf("The average grade is %f\n", average);

   return 0;
}
