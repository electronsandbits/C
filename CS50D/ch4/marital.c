/*
 * File:marital.c
 * --------------
 * This program illustrates the if-else chain by displaying a person's 
 * marital status corresponding to a letter input. The following lette
 * code are used:
 *
 * Marital Status   Input Code
 * --------------   ----------  
 *     Married           M 
 *     Single            S
 *     Divorced          D
 *     Widowed           W
 */

#include <stdio.h>

int main() {
   char marcode;
   printf(" Display's a person's marital status.\n");
   printf("Enter a marital code: ");
   scanf("%c", &marcode);

   if  (marcode == 'M') {
      printf("\nIndividual is married.\n");
   } else if (marcode == 'S') {
      printf("\nIndividual is single.\n");
   } else if (marcode == 'D') {
      printf("\nIndividual is divorced.\n");  
   } else if (marcode == 'W') {
      printf("\nIndividual is widowed.\n");
   } else {
      printf("\nAn invalid code was entered.\n");
   }
   
   return 0;

}
