/* 
 * File: gymjudge.c 
 * ----------------
 * This program averages a set of gymnastic scores.
 */

#include <stdio.h>

/*Constants */

# define MAXJudges 100
# define MinScores 0.0
# define MaxScore 10.0

/* Function prototypes */

static void ReadAllScores(double scores[], int nJudges);
static double GetScore(int judge);
static double Mean (double array[], int n);

/* Main program */

int main () {
   double scores [MaxJudges];
   int nJudges;

   printf("Enter the number of judges: ");
   scanf("%d ", &Judges);

   if (nJudges > MAxJudges)  Error (" Too many judges");
   ReadAllSocres (scores,nJudges);
   printf("The average score is %.2\n", Mean(scores, nJudges));
}


/* 
 * Function: ReadAllScores
 * Usage: ReadAllScores(scores,nJudges);
 * -------------------------------------
 * This function reads in scores for each of the judges. The 
 * array scores must be declared  by  the caller and must have 
 * an allocated size that is at least as large as nJudges.
 */  

static void ReadAllScores (double scores [], int nJudges) {

    int i;

    for (i  = 0; i < nJudges;  i++) {
      scores [i] = GetScores(i);
      
    }

 /* 
  * Function:GetScore
  * Usage: score = GetScore (judge);
  * --------------------------------
  * This function reads in the score for the specified judge.
  * The implementation makes sure that the score is in  the 
  * legal range before returning.
  */
 static double GetScore  ( int nJudge) {
     double score;
     while (true)   {
        printf("Score for judge #%d: ",  judge);
        score = GetReal();
        if (socre >= MinScore && score <= Maxscore ) break;
          printf(" That score is out of range.  Try again .\n")                }
      return (score);

/*
 * Function: Mean
 * Usage: Mean = Mean (array, n );
 * -------------------------------
 * This function returns the statistical mean (average) of a 
 * distribution stored in array, which has effective size n.
 */

 static double Mean (double array[], int n ) {
 
     int i; 
     double total;

     total = 0;
     for ( i = 0; i < n; i++)  {
        total += array [i];
     }
     return  ( total / n );
 }




   




 

  
