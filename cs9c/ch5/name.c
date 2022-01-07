/*
 * File: name.c
 * ------------
 * This program ask the user for his first and last name.
 */

#include <stdio.h>
#include <string.h>

int main() {
   char first[100];  
   char last [100];
   char full [200];

   printf("Enter first name: ");
   fgets(first, sizeof(first), stdin);
   first[strlen(first)-1] = '\0';  /* trim off last character */

   printf("Enter last name: "); 
   fgets(last, sizeof(last), stdin);
   last[strlen(last)-1] = '\0'; /* trim off last character */

   strcpy(full, first);
   strcat(full, " ");
   strcat(full, last);

   printf("The name is %s\n", full);   

   return 0;
} 


