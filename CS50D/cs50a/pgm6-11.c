#include <stdio.h>
#include <stdlib.h> /* required for string conversion functions */
int main() {
   int num;
   double dnum;

   num = atoi("1234");  /* convert a string to an integer */

   printf("The string \"1234\" as an integer number is: %d \n", num);
   printf("This number divided by 3 is: %d \n\n", num / 3);
 
   dnum = atof("1234.96"); /* convert a string to a double */

   printf("The string \"1234.96\" as a double is: %f \n", dnum);
   printf("This number divided by 3 is: %f \n", dnum / 3);
 
   return 0;
}
