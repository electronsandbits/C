/*
 * File: counter.c
 * ---------------
 * The following simple program prints the numbers from 1 to 5 using
 * a counter assignment statement before each printf() and then counts 
 * back down to 1:
 */

#include<stdio.h>

int main() {
   printf("This program increases  a counter from 1 to 5, printing updates");
   printf(" and then counts it back down to 1.\n");

   int counter = 0;
   counter = counter + 1;      /* increases counter to 1 */
   printf("Counter is at %d.\n", counter);
   counter = counter + 1;      /* increases counter to 2 */
   printf("Counter is at %d.\n", counter);
   counter = counter + 1;      /* increases counter to 3 */
   printf("Counter is at %d.\n", counter);
   counter = counter + 1;      /* increases counter to 4 */
   printf("Counter is at %d.\n", counter);
   counter = counter + 1;      /* increases counter to 5 */
   printf("Counter is at %d.\n", counter);
   counter = counter - 1;      /* decreases counter to 4 */
   printf("Counter is at %d.\n", counter);
   counter = counter - 1;      /* decreases counter to 3 */
   printf("Counter is at %d.\n", counter);
   counter = counter - 1;      /* decreases counter to 2 */
   printf("Counter is at %d.\n", counter);
   counter = counter - 1;      /* decreases counter to 1 */
   printf("Counter is at %d.\n", counter);

   return 0;
}
