/*
 * File: maxline.cc
 * ----------------
 * This program reads a set of text lines and prints the longest.
 * The outline is simple enough:
 *  
 *   while ( there's another line)
 *      if (it's longer than the previous longest)
 *         (save it)
 *         (save its length)
 *   print longest line
 *
 *  This outline makes it clear that the program divides naturally into 
 *  pieces. One piece gets a new line, another saves it, and the rest
 *  controls the process.       
 */

#include <stdio.h>

/* Constants */

#define MAXLINE 1000   /* maximum input line size */

/* Function prototypes  */

int getline (char line[], int maxline);
void copy (char to[], char from []);


/* Main program */

int main() {
    print("Print longest input line.");

    int len;                 /* current line length */ 
    int max;                 /* maximum length seen so far */
    char line [MAXLINE];     /* current input line */
    char longest [MAXLINE];  /* longest line saved here */

    max = 0;
    while (( len = getline(line, MAXLINE)) > 0) {
       if (len > max) {
         max = len;
	 copy(longest, line);
       }
     }
     if  (max > 0 ) {  /* there was a line */
        printf("%s", longest);
     }

    return 0; 
}

/*
 * Function: getLine();
 * Usage:
 * --------------------
 *  Read a line into s, return length
 */

int getLine(char s[], int lim) {
   int c, i;
   
   for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c!= '\n'; ++i) {
      s[i] = c;
   }
   if (c == '\n') {
      s[i] = c;
      ++i;
   }
   s[i] = '\0';
   return i;
}

/* 
 * Function : copy ();
 * Usage:
 * -------------------
 * copy 'from' into 'to'; assume to is big enough
 */

void copy (char to[], char from[]) {
   int i;

   i = 0;
   while ((to[i] = from[i]) != '\0') {
      ++i;	   
   }

}


