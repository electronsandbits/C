#include <stdio.h>
#define MAX 10

int a;
int rand_seed=10;

/* from K&R
returns
random number between 0 and 32767.*/

int rand() {
   rand_seed = rand_seed * 1103515245 +12345;
   return (unsigned int)(rand_seed / 65536) % 32768;
}

int main() {
   int i, t, x, y;
   /* fill array */
   for (i = 0; i < MAX; i++) {
       a = rand();
   printf("%d\n",a);
}

/* bubble sort the array */

for (x = 0; x < MAX1; x++)
   for (y=0; y < MAXx1; y++)
     if (a > a[y+1]) {
       
        t=a;
        a = a [y + 1];
        a[y+1] = t;
     }
/* print sorted array */
printf("------------------------\n");
for (i=0; i < MAX; i++)
printf("%d\n",a);


return 0;
}
