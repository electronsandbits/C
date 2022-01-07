/*
 * File:electric.c
 * ---------------
 * Utility companies often have charges that depend
 * on the amount of energy the customers uses.Here the 
 * rates one company charges for electricity, based on 
 * kilowatt-hours (KWh):
 *
 * First 360 KWh ----------- $0.13230 per KWh
 * Next  108 kWh ----------- $0.15040 per kWh 
 * Next  252 KWh ----------- $0.30025 per KWh
 * Over  720 kWh ----------- $0.34025 per kWh
 * The following program calculates the energy costs.
 */
 

#include <stdio.h>

/* Constants */

#define RATE1 0.13230   /* rate for first 360 kWh */
#define RATE2 0.15040   /* rate for next  108 kwH */
#define RATE3 0.30024   /* rate for next  252 kwH */
#define RATE4 0.34025   /* rate for next  720 kwH */

#define BREAK1 360.0    /* first breakpoint for rates */
#define BREAK2 468.0    /* second breakpoint for rates */
#define BREAK3 720.0    /* third breakpoint for rates */

#define BASE1 (RATE1 * BREAK1)                              /* cost for 360 kWh */
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))         /*cost for 468 kWWh */
#define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2))) /* cost for 720 KWh */


/* Main program */

int main() {
   printf("Calculates electric bill.\n");

   double kwh;      /* kilowatt-hours used */
   double bill;     /* charges */

   printf("Please enter the kwh used:");
   scanf("%lf", &kwh);

   if  (kwh <= BREAK1) {
      bill = RATE1 * kwh;
   } else if (kwh <= BREAK2) {  /* kwh between 360 and 468 */
      bill = BASE1 + (RATE2 * (kwh - BREAK1));	   
   } else if (kwh <= BREAK3) {  /* kwh between 468 and 720 */
      bill = BASE2 + (RATE3 * (kwh - BREAK2));
   } else {         /* kwh above 680 */
      bill = BASE3 + (RATE4 * (kwh - BREAK3));	   
   }	   
   printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
  
   return 0;
  
}
