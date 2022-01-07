/*
 * This program takes a first name and last name 
 * and combines the two strings.
 */

#include <string.h>
#include <stdio.h>

int main(){
   char first[100];     /* first name */
   char last[100];      /* last name */
   char fullName[200];  /* full version of first and last name */

   strcpy(first, "Saniyyah");   /* Initialize first name */
   strcpy(last, "Funny");       /* Initializ last name */

   strcpy(fullName, first);
   strcat(fullName, "  ");
   strcat(fullName, last);

   printf("The full name is %s\n", fullName);

   return 0;
}
