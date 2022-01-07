/*
 * File: bubbleSort.c
 * ------------------
 * This program lets the user enter up to 10 numbers and then sorts them.
 * The sorting algorithm is the bubble sort. The general concept behind the 
 * bubble sort, indeed how it got its name, is the repeated comparisons and, if 
 * necessary, exchanges of adjacent elements. This is a little like bubblrd in 
 * a tank of water with each bubble, in turn, seking its  own level.
 */   
 
#include <stdio.h>

int main() {
   int item[10];
   int a, b, t; 
   int count;
   

   /* read in numbers */
   printf("How many numbers?  ");
   scanf("%d", &count);
   for (a = 0; a < count; a++) {
      scanf("%d ", &item[a]);
   }
   
   /* Now, sort them using a bubble sort */
   for (a = 1; a < count; ++a)  {
      for (b = count - 1; b >= a; --b) { 
	 /* Compare adjacent elements */    
          if (item [b-1] > item [b] ) {
            /* exchange elements */
	    t = item [b - 1];	  
	    item [b - 1] = item [b];
	    item[b] = t;
	  }
       } 
    }  

    /*display sorted list */
    for (t = 0; t < count ; t++) {
       printf ("%d ", item[t]);
    } 
    
    return 0;
}
