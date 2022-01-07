/*
 * File:grade.c
 * ------------
 * This program uses a two-dimensional array to store the numeric
 * grade for each student in a teacher's classes. The program assumes
 * that the teacher has three classes and a maximum of 30 students per 
 * class. 
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* Constants */
#define CLASSES 3
#define GRADES 30

/* Function prototypes */
int grade[CLASSES] [GRADES];
void enterGrades(void);
int getGrade(int num);
void dispGrades(int g[][GRADES]);

/* Main program */

int main() {
   char ch, str[80];

   for (; ;)
     do {
       printf("(E)nter grades\n");
       printf("(R)eport grades\n");
       printf("(Q)uit\n");
       gets(str);
       ch = toupper(*str);
     } while (ch!= 'E' && ch!= 'R' && ch!= 'Q');
   
   switch(ch) {
      case 'E':
	enterGrades();
        break;
      case 'R':
        dispGrades(grade);
        break;	
      case 'Q':
        exit(0);	
   }
}

/*
 * Function: enterGrades
 * Usage:
 * ----------------------
 * Enter the student's grades. 
 */

void enterGrades(void) {
   int t, i;

   for (t = 0; t < CLASSES; t++) {
      printf("Class # %d:\n", t + 1);
      for (i = 0; i < GRADES; ++i)
	 grade[t][i] = getGrade(i);
   }    
}

/*
 * Function:getGrade
 * Usage:
 * -----------------
 *  Read a grade.
 */

int getGrade(int num) {
   char s[80];
 
   printf("Enter grade for student # %d:\n", num +1);
   gets(s);
   return (atoi(s));
}

/*
 * Function:dispGrade
 * Usage: 
 * ---------------------
 *  Display grades.
 */

void dispGrades(int g[][GRADES]) {
   int t, i;

   for (t = 0; t< CLASSES; ++t) {
      printf("Class # %d:\n", t + 1);
      for (i = 0; i < GRADES; ++i)
	  printf("Student #%d is %d\n", i + 1, g[t] [i]);      
   }
}
