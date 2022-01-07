/*
 * File:circle2.c
 * --------------
 * This program calculate the area and circumference of a circle
 * of specified radius, using an external data file.
 */  

#include <stdio.h>
#include <stdlib.h>

/* Constants */

#define PI 3.14159

/* Main program */

int main() {
   double radius,           /* input - radius of a circle */
	  area,             /* output - area of a circle */
	  circumference;    /* output - circumference of a circle */
   FILE  *inp, *outp;       /* pointers to input and output files */

   /* Open the input and output files */ 
   inp  = fopen("circle.txt", "r");
   outp = fopen("circle.out", "w");  

   /* Read the radius */
   fscanf(inp, "%lf", &radius);
   fprintf(outp, "The radius is %.2f\n", radius);
   printf("The radius is %.2f\n", radius);
   fclose(inp);       /* close the input file. */

   /* Calculate the area and circumference */
   area = PI * radius  * radius ;
   circumference = 2 * PI * radius;

   /* Store the output */
   fprintf(outp, "The area is %.2f\n", area);
   fprintf(outp, "The circumference is %.2f\n", circumference);
   printf("The area is %.2f\n", area);
   printf("The circumference is %.2f\n", circumference);

   fclose(outp);   /* Close the output file. */

   return 0;
}
