/*
 * File:graph.c
 * ------------
 * This program plots a simple graph.
 */

#include <stdio.h>

int main() {
  char graph[51][51];
  int x, y; 

  for (x = 1; x < 51; x++) {
     for (y = 1; y < 51; y++)   {
     }	          
     graph[y][x] = ' ';
  }

}

for (x = 1; x < 51; x++) {
   graph[0][x] = '-'; 
}
  
for (y = 1; y < 51; y++) { 
   graph[y][0] = '|';
} 
  
graph [0][0] = '+';

return 0;

