#include <stdio.h>
#define MAXPRICES 9

int main () {
   double prices [MAXPRICES];
   int i;

   /* Input the grades */
   for (i = 0; i < MAXPRICES; i++) {
      printf("Enter a grade: ");
      scanf("%lf", &prices[i]);
   }
  
   /* Display the grades */
   printf("\n");
   for (i = 0; i < MAXPRICES; i++) {
     // printf("price is %lf\n", prices[i]);
   }
   printf("%lf", prices[i]);
   return 0;
}
