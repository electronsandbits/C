


#include <stdio.h>

int main() {
   int i = 0, foo = 0, bar = 0;
 
   while (i < 17) {
      i++;
      foo += i;
   }
   printf("%d\n", foo);
  
   for ( i = 0; i < 17; i++) {
      bar += i;
   } 
   printf("%d\n", bar);

   return 0;
}
