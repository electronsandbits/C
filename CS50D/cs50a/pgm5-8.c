#include <stdio.h>
#define SENTINEL -1

int main() {
  
   float grade = 0.0f;
   float total = 0.0f;

   printf("\nTo stop entering grades, type in any negative number.\n\n");
  
   while (grade > SENTINEL) {
      printf("Enter a grade: ");
      scanf("%f", &grade);
      total = total + grade;
   }
   printf("\nThe total of the grades is %f\n", total-grade);

   return 0;
}
