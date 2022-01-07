#include <stdio.h>  
int main() {


   int num1, num2, num3;
   double average;

   /* get the input data */
   printf("Enter three integer numbers: ");
   scanf("%d %d %d", &num1, &num2, &num3);

   /* calculate the average*/
   average = (num1 + num2 + num3) / 3.0;

   /* display the result */
   printf("\nThe avearge of %d, %d, and %d is %f\n", 
                         num1, num2, num3, average);

  
   return 0;
}
