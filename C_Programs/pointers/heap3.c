/* 
 * File :heap3.c 
 * -------------
 * The following program shows how to use the heap.
 * It allocates an integer block, fills it, writes it, and 
 * disposes of it.
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
   int *p;

   p = (int *) malloc(sizeof(int));
   *p = 10;
   printf("%d\n", *p);
   free(p);

   return 0;

}
