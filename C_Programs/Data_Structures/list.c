/*
 * File: list.c
 * ------------
 * This program illustrates that the pointer member
 * of a structure is used like any other pointer variable.
 */

#include <stdio.h>

struct test {
   int idNum;
   double *ptPay;
};

int main() {
   struct test emp;
   double pay = 456.20;

   emp.idNum = 12907;
   emp.ptPay = &pay;

   printf("Employee number %d was paid $%6.2f\n", emp.idNum, *emp.ptPay);

   return 0;
}
