/* 
 * File:sample.c
 * -------------
 * This sample program illustrates bound checking
 * on arrays.
 */

int main() {
  int count[10], i;

  /* This causes count to be overrun */
  for (i = 0; i < 100; i++) {
     count[i] = i;
  }   


}
