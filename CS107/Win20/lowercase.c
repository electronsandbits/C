/*
 * File:lowercase.c
 * This program prints out every lowercase character.
 */
#include <stdio.h>
#include <ctype.h>


int main() {
   char ch;

   for ( char ch = 'a'; ch <= 'z';  ch++) {
      printf("%c", ch);
   }
 

}
