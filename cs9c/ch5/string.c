/*
 * File: string.c
 * --------------
 *  This program uses the conversion %S for printing string variables.
 */

#include <stdio.h>
#include <string.h>

char name[30]; /* First name of someone */

int main() {
   strcpy(name, "Wiltold Frank Funny");          /* Initialize the name */ 
   printf("The name is %s\n", name);

   return 0;

}



