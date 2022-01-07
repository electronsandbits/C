/*
 * File:if.c
 * ---------
 * This program finds the largest of the numbers
 * stored in i, j, and k and sotres that value in max.
 */

#include <stdio.h>

int main() {
   int i, j, k, max;
   printf("Finds the largest number.\n");

   printf("Enter the numbers: ");
   scanf("%d %d %d", &i, &j, &k);

   if  (i > j)  {
      if  (i > k)  {
         max = i;
         printf("The largest value is %d\n", i);
      } else {
         max = k;
	 printf("The largest value is %d\n", k);
      }
   } else {
      if  (j > k) {
         max = j;
         printf("The largest value is %d\n", j);
      } else {
         max = k;
	 printf("The largest value is %d\n", k);
      }	 
     
   }  
   
   return 0;  
}

