/*
 * File: pgm6-6.c 
 * --------------
 * This program calculate both the expected height of a child  between the 
 * ages of 6 and 11 and the deviation of this height norm to an actual child's height.
 */

#include <stdio.h>
#include <math.h>

/* here are the function prototypes */

  float norms(float);        
  float pcdif(float, float);
  void showit(float, float);

/* The Main Program */

int main() {
   int years, months;
   float height, normht;
   float age, perdif;

   /* this is the input section */

   printf("\nHow old (in years) is this child? ");
   scanf("%d", &years);
   printf("How many months since the child's birthday? ");
   scanf("%d", &months);
   age = years + months/12.0;  /* convert to total years */
   printf("Enter the child's height (in inches): ");
   scanf("%f", &height);

  /* this is the calculations section */

   normht = norms(age);
   perdif = pcdif(height, normht);

  /* this is the display section */

   showit(normht, perdif);

   return 0;
}

/* the following is a stub for norms() */
float norms(float age) {
  printf("\nInto norms()\n");
  printf("   age = %f\n", age);
  return(52.5);
}

/* the following is a stub for pcdif() */

float pcdif(float actual, float normal) {
  printf("\nInto pcdif()\n");
  printf("   actual = %f    normal = %f\n", actual, normal);
  return(2.5);
}

/* the following is a stub for showit() */

void showit(float normht, float perdif) {
  printf("\nInto showit()\n");
  printf("   normht = %f      perdif = %f\n", normht, perdif);
}
