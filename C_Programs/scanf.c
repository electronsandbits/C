/*
 * File: Scanf.c
 * -------------
 *  This program illustrates scanf formatting.
 */

#include <stdio.h>


int main()  {
   int n;

   while (scanf("%d", &n) == 1) {
      printf("%d\n", n);
   }   
   return 0;

}	     


