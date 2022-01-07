/*
 * File: string.c 
 * --------------
 * This program shows how to declare and  displays  string characters.
 */



#include <stdio.h>


int main() {
   char messag1 [21]  = "Input the the Following Data";
   char messag2 []    = "---------------";
   char messag3 [12]  = "Enter the Date"; 
   char messag4 [22]  = "Enter the Account Number";

   printf("%s", messag1);
   printf("%s", messag2);
   printf("%s", messag3);
   printf("%s", messag4);


   return 0;

}
