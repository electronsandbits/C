/*
 * File: array2.c
 * --------------
 * This program declares and initializes an array of character
 * pointers and then asks for ratings associated.
 */  

#include <stdio.h>

int main() {
   int i;
   int ctr = 0;
   char ans;

   /*  Declaring our array of 9 characteres and then initializing them  */

   char  *movies[9] = {"Amour", "Argo", "Beasts of the Souther Wild",
	               "Django Unchained", "Les Miserales",
		       "Life of Pi", "Lincoln", "Silver Linings Playbook",
		       "Zero dark Thirty"};

   int movieRatings[9]; /* A Corresponding array of 9 integers for movie ratings */
   char *tempMovie = "This will be used to sort rated movies";
   int outer, inner, didSwap, tempRating; /* for the sort loop */

   printf("\n\n*** Oscar Season 2012 is here! ***\n\n");
   printf("Time to rate this year's best picture nominees:");

   for (i = 0; i < 9; i++) {
      printf("\nDid you see %s? (Y/N): ", movies[i]);
      scanf(" %c", &ans);
      if ((toupper(ans)) == 'Y') {
        printf("\nWhat was your rating on a scale ");
        printf("of 1-10: ");
	scanf(" %d", &movieRatings[i]);
	ctr++; /* Thils will be used to print only movies you've seen */

	continue;
      }	
      else {
        movieRatings[i] = -1;
      }
   }
   /* Now sort the movies by rating(the unseen go to the bottom) */

   for (outer = 0; outer < 8; outer++)  {
      didSwap = 0;
      for (inner = outer; inner < 9; inner++) {
         if (movieRatings[inner]  > movieRatings[outer]) {
           tempMovie = movies[inner];
	   tempRating = movieRatings[inner];
	   movies[inner] = movies[outer];
	   movieRatings[inner]  = movieRatings[outer];
	   movies[outer] = tempMovie;
	   movieRatings[outer] = tempRating;
	   didSwap = 1; 
         } 
      }
      if (didSwap == 0 ) {
        break;
      }
   }
   /* Now to pring the movies you saw in orfer */
   printf("\n\n** Your Movie Ratings for the 2012 Oscar Contenders **\n");

   for (i = 0; i < ctr; i++) {
      printf("%s rated a %d!\n", movies[i], movieRatings[i]); 
   }
   return 0;  
}



 



