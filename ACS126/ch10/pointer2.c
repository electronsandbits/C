/*
 * File:pointer2.c
 * ----------------
 * This program shows the use of pointers to access data.
 */


#include <stdio.h>

int main() {
   int var1, var2;
   int *ptvar1, *ptvar2;  /* pointer variable declaration: ptvar1, ptvar1 */


   ptvar1 = &var1;   /*storing the address of var1 in pointer variable ptvar1 */

   ptvar2 = &var2;   /*storing the address of var2 in pointer variable ptvar2 */


   var1 = 100;   /* value of 100 is stored in variable var1 */
   var2 = 500;   /* value of 500 is stored in variable var2 */

 
   printf("var1 = %d var2 = %d\n", var1, var2);
   printf("ptvar1 = %d   ptvar2 = %d\n", ptvar1, ptvar2);
   printf("value of var1 = %d  value of var2 = %d\n", *ptvar1, *ptvar2);

   return 0;
} 
