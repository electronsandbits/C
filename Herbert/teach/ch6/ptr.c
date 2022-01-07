/*
 * File:pointer.c
 * --------------
 * This short program prints 199 on the screen.
 */

#include <stdio.h>

int main () {
   
   int *p, q;

   q = 199;  /* assign q 199 */   

   p = &q;   /* assign p the address of q */

   printf("%d", *p); /* display q's value using pointer */
   printf("\n");
  
   return 0;

}
