/*
 * File:element.c
 * --------------
 * o programa element.c, inicializa a matriz notas e depois usa 
 * printf para exibir os valores dos elementos.
 */

#include <stdio.h>

int main() {
   int notas[5] = {80, 70, 90, 85, 80};
   
   printf("Valores da Matriz\n");
   printf("notas[0] %d\n", notas[0]);
   printf("notas[1] %d\n", notas[1]);
   printf("notas[2] %d\n", notas[2]); 
   printf("notas[3] %d\n", notas[3]);
   printf("notas[4] %d\n", notas[4]);

   return 0;		   

}
