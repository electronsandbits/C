/* 
 * File: ex5-2.c 
 * -------------
 * This set of programs refer to exercises 5-2.
 */


#include<stdio.h>

/* This program displays the numbers from 10 to 20 on a single line.*/

/* int main () { */
   
/*    int number = 10; */
  
/*    while (number <= 20) { */
/*       printf("%d ", number); */
/*       number ++; */
/*    } */
/*    return 0;    */
/* }   */




/* /\* This program displays only numbers from 10 to 20 on a single line.*\/ */

/* int main () { */
   
/*    int even = 10; */
  
/*    while (even <= 20) { */
/*       printf("%d ", even); */
/*       even = even + 2; */
/*    } */
/*    return 0; */
/* } */





/* /\* This program displays the numbers from 20 to 10 on a single line.*\/ */

/* int main () { */
   
/*    int num = 20; */
  
/*    while (num >= 10) { */
/*       printf("%d ", num); */
/*       num --; */
/*    } */
/*    return 0; */
/* } */





/* This program displays the numbers from 1 to 21 on a single line.*/

int main () {
   
   int num = 0;
  
   while (num <= 20) {
      num ++;     /* This version prints numbers from 0 t0 21 */
      printf("%d ", num);
      //  num ++;       /*  This version prints numbers from 0 t0 20*/
   }
   return 0;
}
