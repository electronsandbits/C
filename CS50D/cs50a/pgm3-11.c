#include <stdio.h>
int main() {

   char fkey, skey;
	
   printf("Type in a character: ");
   scanf("%c%c", &fkey, &skey); /* the enter code goes to skey */
   printf("The keystroke just accepted is %d", fkey);
   printf("\nType in another character: ");
   scanf("%c", &skey); /* accept another code */
   printf("The keystroke just accepted is %d\n", skey);
	
   return 0;
}
