/*
 * File:character.c
 * ----------------
 *  This program illustrates how the characters constant  work.
 */

#include <stdio.h>

int main() {
   printf("%c" , '\a'); /* causes the bell to ring */
   putchar ('\a');     /* causes the bell to ring */
   printf("\n");
   /** The double-quote character " has to be escaped if it is used as a 
    * character in a string.
    */

    printf("\"abc\"");   /* "abc" is printed */ 
    printf("\n");
    /* The single-quote character ' has to be ecaped if its used in 
     * a constant character.
     */
    
    printf("%cabc%c" , '\'', '\''); /* 'abc' is printed */
    printf("\n");
    
    /* Inside single quotes we can use either \" or ""  */
    printf("%cabc%c", '\"' , '"'); /* 'abc' is printed */
    printf("\n"); 


    /* Inside double quotes we can use either \' or ' */
    printf("\'abc'");  /* 'abc' is printed */
    printf("\n");


    return 0;

}
