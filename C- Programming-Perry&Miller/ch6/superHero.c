/* 
 * File:superHero.c
 * ----------------
 * This program pairs three kids 
 * with their favorite superhero.
 */

#include <stdio.h>
#include <string.h>

int main() {
   printf("This program pairs three kids with their favorites superhero.\n");

   /* Kid1 can hold an 11-character name */
   char Kid1[12];

   /* Kid2 will be 7 character  (Maddie plus null 0) */
   char Kid2[] = "Maddie";

   /* Kid3 is also 7 characters, but specifically defined */
   char Kid3[7] = "Andrew";

   /* Hero1 will be 7 characters (adding null 0!) */
   char Hero1  = "Batman";

   /* Hero2 will extra room just in case */
   char Hero2[34] = "Spiderman";
   char Hero3[25];
   
   
   /* Kid0 is being defined character-by character, not efficient, but it does work*/
   Kid1[0] = 'K'; 
   Kid1[1] = 'a';
   Kid1[2] = 't';
   Kid1[3] = 'i';
   Kid1[4] = 'e';
   Kid1[5] = '\0'; /* Never forget the null 0 so C knows when the string ends */
  
   strcpy(Hero3, "The Incredible Hulk");

   printf("%s\'s favorite hero is %s.\n", Kid1, Hero1);
   printf("%s\'s favorite hero is %s.\n", Kid2, Hero2);
   printf("%s\'s favorite hero is %s.\n", Kid3, Hero3);

   return 0;
}
