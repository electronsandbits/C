/*
 * File: array.c
 * -------------
 * This program shows the conection between arrays names and pointers.
 */

#include <stdio.h>

int main () {
   int vals[7] = {14, 40, 42, 133,144, 1260};

   printf("The first value is %d.\n", vals[0]);
   printf("The first value is %d.\n", *vals);
   printf("The first value is %d.\n", *(vals + 0));
   printf("The second value is %d.\n", *(vals + 1));
   printf("The third value is %d.\n", *(vals + 2));
   printf("The fourth value is %d.\n", *(vals + 3));
   printf("The fifth value is %d.\n", *(vals + 4));
   printf("The sixth  value is %d.\n", *(vals + 5));
   printf("The seventh value is %d.\n", *(vals + 6));
}
