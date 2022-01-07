/*
 * File: string.c
 * --------------
 * O programa a seguir, define uma string de 256 caracteres, e, depois,
 * atribui as letras maiusculas do alfabeto aos primeiros 26 digitos da
 * string. O programa usa o laco for para atribuir as letras A ate Z a 
 * string. O programa depois coloca o caractere NULL apos a letra Z para 
 * indicar o final da string. A funcao printf entao exibira cada caractere
 * na string ate o caractere NULL.
 */
 
#include <stdio.h>

int main() {
   char string[256];
   int i;

   for (i= 0; i < 26; i++) {
      string[i]  = 'A' + i;
   }
   string[i] = NULL;
   printf("A string contem  %s\n  ", string);

   return 0;

}
