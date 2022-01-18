/*
 * File: RPNCalculator.c 
 * ---------------------
 * This program uses the Reverse Polish notation to
 * implement a calculator program.
 *
 */


#include <stdio.h>
#include <stdlib.h>  /* for atop() */

/* Function prototypes */

int getOp(char []);
void push(double);
double pop(void);


/* Constants */

#define MAXOP 100   /* Max size of operand or operator */
#define NUMBER '0'  /* Signal that a number was found */

/* Main program */

int main() {
   int type; 
   double op2;
   char s[MAXOP];

   while ((type = getOp(s)) != EOF) {
      switch(type) {
         case NUMBER: push(atof(s)); break;
         case '+ '  : push(pop() + pop()); break;
         case '*'   : push(pop() * pop()); break;
         case '-'   :
           op2 = pop();
           push(pop() - op2);
           break;
         case '/'   :   
           op2 = pop();
           if  (op2 != 0.0) {
              push(pop()  / op2);
           } else {
	      printf("error: zero divisor\n");
           }
           break;
         case '\n'  : printf("\t%.8g\n",  pop()); break;
         default    :
	    printf("error: unknown command %s\n", s);
	    break;
      }
   }
   return 0;
}
