#include <stdio.h>  /* this line may be placed second instead of first */ 
#include <math.h>   /* this line may be placed first instead of second */
int main() {

   int height;
   double time;

   height = 800.0;
   time = sqrt(2.0 * height / 32.2);
   printf("It will take %f seconds", time);
   printf(" to fall %d feet.\n", height);

   return 0;
}
