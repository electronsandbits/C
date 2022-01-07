/*
 * File: max.c
 * -----------
 * This program finds the largest of the numbers
 * stored in i,j, and k and stores that value in max
 */ 

#include <stdio.h>

int main() {
   printf("Finds the largest of the numbers.\n");

   int i, j, k;
   int max;
   
   printf("Please enter three numbers: ");
   scanf("%d %d %d", &i, &j, &k);

   if  ( i > j) {
      if (i > k)  {
         max = i;
      } else {
         max = k;	      
      }	 
      
      printf("The maximum value is\n", max);
   
   }  else {
       if (j > k) {
         max = j;      
      } else {
         max = k; 
      } 
   }
  
   printf("The maximum value in this case is\n", max);

   return 0;

} 


