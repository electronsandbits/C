/*
 * File:remoteSystem.c
 * -------------------
 * This program simulates a log-on to a remote system. 
 * The systems can be accessed only if the user knows the password,
 * which in this case is "Tristan". Give the user three tries to enter
 * the correct password. If the user succeeds, simply print Log-on 
 * Successful and exit. If the user fails after three attempts to enter 
 * the correct password, display Access Denied and exit.
 */ 
 
#include <stdio.h>
#include <string.h>


int main() {
   char password[80];
   int i;

   for (i = 0; i < 3; i++) {
      printf("Password: ");
      gets(password);
      if(!strcmp("Tristan" , password)) break;
   }
   
   if (i == 3) printf("Access Denied\n");
   else printf("Log-on Successful\n");

   return 0;
} 
