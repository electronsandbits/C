/*
 * File: message2.c 
 * ---------------
 * This program illustrates simple function mechanism.
 * Now including a formal parameter.
 */


#include <stdio.h>

/* Function prototypes */

void printMessage(int k);


/* Main program */

int main ()  {
   int howMany;

   printf("%s", 
       "There is a MindFulness Message for you.\n"
       "How many times do you want to see it? ");
   scanf("%d", &howMany);
   printMessage(howMany); /* Call the function */
   
   return 0;
}

/* 
 * Function: printMessage
 * Usage: printMessge();
 * ---------------------
 * Prints the message on the screen.
 */ 

void printMessage(numberOfMessages) {
   int i;

   printf("Focusing on The Bigger Picture - Confucius says:\n");
   for (i = 0; i < numberOfMessages; ++i) {
      printf(" He who chases two rabbits catches none\n");
   }
}
