/*
 * File: string2.c
 * ---------------
 * O programa a seguir tambem atribui as letras A ate Z a uma string
 * de caracteres. No entanto, depois, o programa atribui o caractere NULL
 * a string [10], que eh a posicao que segue imediamente a letra J.
 * Quando printf exibe o conteudo da string, ele parara  na letra J:
 */ 
 
#include <stdio.h>

int main() {
   char string[256];
   int i;

   for ( i = 0; i < 26; i++) {
      string[i] = 'A' + i;
   }
   string[10] = NULL;
   printf("A string contem %s\n", string);
   
   return 0; 

}

