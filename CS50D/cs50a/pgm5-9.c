#include <stdio.h>

int main() {

   float  grade;
   float total = 0.0f; /* note the initialization here */

   printf("\nTo stop entering grades, press either the F6 key");
   printf("\n or the ctrl and Z keys simultaneously on");
   printf(" IBM compatible computers");
   printf("\n or the ctrl and D keys for UNIX operating systems.\n\n");
   printf("Enter a grade: ");

   while (scanf("%f", &grade) != EOF) {
      total += grade;
      printf("Enter a grade: ");
   }
   printf("\nThe total of the grades is %f\n", total);
  
   return 0;
}
