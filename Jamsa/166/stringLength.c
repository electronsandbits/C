/*
 * File: stringLength.c
 * --------------------
 * O programa a seguir, usa a funcao gets para ler uma strin de caracteres
 * do teclado. O programa depois usa um laco for para exibir os caracteres
 * da string  um de cada vez ate que a condicional string[i] != NULL seja 
 * avaliada como falsa.
 */

#include <stdio.h>

int main() {
   char string[256];  /* string digitada pelo usuario */
   int i;             /* indice para a string */

   printf(" Digite uma string de caracteres e pressione Enter: \n");
   gets(string);

   /* Exibe cada string  de caracteres ate um NULL seja encontrado */
   for (i = 0; string[i] != NULL' i++) {
      putchar (string[i]);
   } 
   printf("\nO numero de caracteres na string eh %d\n", i);


}
