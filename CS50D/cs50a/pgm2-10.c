#include <stdio.h>
#include <limits.h> /* contains the minimum and maximum specifications */

int main() {

   printf("The smallest character code that can be stored is %d\n", SCHAR_MIN);
   printf("The largest character code that can be stored is %d\n", SCHAR_MAX);
   printf("The smallest integer value that can be stored is %d\n", INT_MIN);
   printf("The largest integer value that can be stored is %d\n", INT_MAX);
   printf("The smallest short integer value that can be stored is %d\n",SHRT_MIN);
   printf("The largest short integer value that can be stored is %d\n", SHRT_MAX);
   printf("The smallest long integer value that can be stored is %d\n", LONG_MIN);
   printf("The largest long integer value that can be stored is %d\n", LONG_MAX);

   return 0;
}
