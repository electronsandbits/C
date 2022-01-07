/*
 * File: heap4.c 
 * -------------
 * This program demonstrates heap using structure.
 */


#include <stdio.h>
#include <stdlib.h>


/*
 * Type:rec
 * --------
 * This structure 
 */


struct rec {
   int i;
   float f;
   char c;
};


/* Main program */

int main() {
   struct rec *p;
   p = (struct rec *) malloc (sizeof(struct rec));
   (*p).i = 10; /* p->i = 10 */
   (*p).f = 3.14;
   (*p).c = 'a';
   printf("%d %f %c\n",(*p).i, (*p).f, (*p).c);
   free(p);

   return 0;

}
