/*
 * File:string.c
 * -------------
 * This program reads a string entered at the keyboard
 * It then displays the contents of that string one character a time.
 */

#include <stdio.h>

int main () {
  char str[80];
  int i;
  
  /* Enter the string of characters */
  printf("Enter a string(less than 80 chars):  ");
  gets (str);

  /* Display the contents */
  for (i = 0; str[i]; i++) {
     printf("%c", str[i]);
  }

  return 0;

}
