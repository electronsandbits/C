/*
 * File: Hesperus.c 
 * ----------------
 * This program is based on the wreck of the ship Hesperus.
 * This calamity at sea, which was made famous in a poem by 
 * Henry Wadsworth Longfellow, ocurred off the reef of Norman's
 * Woe near Gloucester, Massachusetts, in 1839.
 * The waters off the reef are about 7 fathoms deep.
 * In the program we convert this depth to other units of measure.
 */

#include <stdio.h>

int main(void)
{
   int inches, feet, fathoms;
  
   fathoms = 7;
   feet = 6 * fathoms;
   inches = 12 * feet;
   printf("Wreck of the Hesperus :\n");
   printf("Its depth at sea in different units:\n");
   printf("   %d fathoms\n", fathoms);
   printf("   %d feet\n", feet);
   printf("   %d inches\n",inches);

   return 0;


}
