/* convert a Fahrenheit temperature to Celsius */

#include <stdio.h>
int main() {
   float celsius; 
   float fahrenheit = 75;  /* declaration and initialization */

   celsius = 5.0/9.0 * (fahrenheit - 32.0);
   printf("The Celsius equivalent of %5.2f degrees Fahrenheit\n",                                                    fahrenheit);
   printf("   is %5.2f degrees\n", celsius);

   return 0;
}
