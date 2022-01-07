/*
 * File: area.c
 * ------------
 * This program calculate the areas of circles,
 * using a while loop; the results are stored
 * in an array of structures.
 * The number of circles is unspecified.
 * a string is entered to identify each data set
 */


#include <stdio.h>

/* Function prototypes */

float process(float radius);

/* Constants */

#define PI 3.1159


int main () {
   int n, i = 0;

   struct {
      char text[20];
      float radius;
      float area;

   } circle[10];     /* structure variable declaration */
 
   printf("To STOP, enter END for the identifier\n");
   printf("\nIdentifier: ");
   scanf("%s", circle[i].text);

   while (circle[i].text[0] != 'E' || circle[i].text[1] != 'N'
	  || circle[i].text[2] !='D')  {
      printf("Radius:");
      scanf("%f", &circle[i].radius);
      if  (circle[i].radius < 0 ) {
         circle[i].area = 0;
      } else {
	circle[i]. area = process (circle[i].radius);
      }
      ++i;
      printf("\nIdentifier: ");  /* next set of data */
      scanf("%s", circle[i].text);
    }
    n = --i;   /* tag the highest value of i */

    /* Display the array elements */
    printf("\n\nSummary of Results\n\n");

    for (i = 0; i <= n; ++i) {
       printf("%s   Radius = %f   Area = %f\n", circle[i].text, 
        circle[i].radius, circle[i].area);
    }
    
    return 0;
}

/* 
 * Function:process
 * Usage: process(float r )
 * ------------------------
 * Returns area 
 */

float process(float r) {
  float a ;

  a = PI * r * r;
  return (a);
}
