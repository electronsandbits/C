/* 
 * File: prog6-2.c 
 * --------------
 * This program counts the number of responses for a each 
 * rating  for a survey about a tv show.In other words the 
 * program determines how many people rated the show a 1, how 
 * many rated it 2, and so on up  to 10.
 * 
 * Demonstrating an Array of Counters
 */


#include <stdio.h>

int main (void) {
   int  ratingCounters[11], i, response;

   for ( i = 1;  i <= 10;  ++i ) {
      ratingCounters[i] = 0;
   }
   printf ("Enter your responses\n");

   for ( i = 1;  i <= 20;  ++i ) {
      scanf ("%i", &response);
      if ( response < 1 || response > 10 )
        printf ("Bad response: %i\n", response);
     else
       ++ratingCounters[response];
     }
     printf ("\n\nRating   Number of Responses\n");
     printf ("------ -------------------------\n");

     for ( i = 1;  i <= 10;  ++i ) {
        printf ("%4i%14i\n", i, ratingCounters[i]);
     }
     return 0;
}
