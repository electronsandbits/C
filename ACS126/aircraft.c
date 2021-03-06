/*
 * File: aircraft.c
 * -----------------
 * This program estimates new velocity and acceleration values for
 * specified time.  The user is requested to enter the time.
 */


#include <stdio.h>
#include <math.h>

int main (void) {
   double time, velocity, acceleration;
   
   printf("Enter new time value in seconds: \n");
   scanf("%lf", &time);

   /* Compute velocity and acceleration */

   velocity  = 0.00001 * pow(time, 3) - 0.00488 * pow(time, 2) +
                   0.75795 * time + 181.3566;
   acceleration  = 3 - 0.000062 * velocity * velocity;

   /* Output velocity and acceleration */

   printf ("Velocity  = %8.3f m/s \n", velocity);
   printf ("Acceleration  = %8.3f m/s*s \n", acceleration);

   return 0;
}

