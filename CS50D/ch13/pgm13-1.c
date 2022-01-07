/*
 * File: pgm13-1.c 
 * ---------------
 * This program illustrates that the pointer member of a 
 * structure is used like any other pointer variable.
 */

#include <stdio.h>


/*
 * Type: Test
 * ----------
 * This structure contains two members.The name of first
 * member the is an intger and the second is a pointer named ptPay.
 */

struct Test {
   int idNum;
   double *ptPay;
};

/* Main program */

int main() {
   struct Test emp;
   double pay = 1440.72;


   emp.idNum = 12748;
   emp.ptPay = &pay;

   printf("Employee number %d was paid $%6.2f\n", emp.idNum, *emp.ptPay);

   return 0;
}

