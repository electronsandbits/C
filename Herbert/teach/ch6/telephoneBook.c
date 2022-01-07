/*
 * File:telephoneBook.c
 * ---------------------
 * This program creates a string table consisting of names
 * and telephone numbers. Initialize the array with some names of 
 * people you know and their phone numbers. Next, have the program 
 * request a name and print the associated telephone number.
 * In other words, create a computerized telephone book.
 */

#include <stdio.h>
#include <string.h>

char phone [] [2] [40] = {  
  "Fred", "555-1010\n", 
  "Barney", "555-1234\n",
  "Ralph", "555-2347\n",
  "Tom",   "555-8396\n",
  "", ""

 };

 int main() {
    printf("A simple computerized telephone book.\n");

    char name [80];
    int i;

    printf("Name? ");
    gets(name);

    for (i = 0; phone[i][0][0]; i++) {
       if (!strcmp(name, phone[i][0]))
         printf("number:  %s", phone[i][1]); 	       
    }

    return 0;
  
}
