/**
 * CS107 Lecture 2
 * Written by Nick Troccoli
 * ------------------------
 * This program shows some of the limitations of integer
 * representations!  Why does it behave  in this way?
 * Note: this is based on a real bug that occurred with an
 * airline in 2004: https://arstechnica.com/uncategorized/2004/12/4490-2/
 */

#include <stdio.h>     /* for printf */ 
#include <unistd.h>    /* for sleep */

int main(int argc, char *argv[]) { /* argc and argv are ignored by this particular program */
   short airlineCrewChangesThisMonth = 0;
   int i;
   /* Simulate accumulating crew changes over time */
   for (i = 0; i < 31; i++) {
      /* Pretend there are a certain number of crew changes per day */
      airlineCrewChangesThisMonth += 1200;
      printf("Crew changes by end of day %d: %d\n", i + 1, airlineCrewChangesThisMonth);
      sleep(1);
   }
   
   return 0;
}
