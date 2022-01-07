/*
 * File: message.c 
 * ---------------
 * This program illustrates simple function mechanism.
 */


#include <stdio.h>

/* Function prototypes */

void printMessage(void);


/* Main prograam */

int main ()  {
   
   printMessage();
   
   return 0;
}

/* 
 * Function: printMessage
 * Usage: printMessge();
 * ---------------------
 * Prints the message on the screen.
 */ 


void printMessage() {
  
   printf("Focusing on The Bigger Picture\n");
   printf("Confucius: He who chases two rabbits catches none\n.");
}




