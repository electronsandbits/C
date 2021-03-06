#include <stdio.h>
#include <math.h>
#define MINAGE 6.0

/*Function prototypes */
  float norm(float);       
  float pcdif(float, float);
  void showit(float, float );


int  main(void) {
    int years, months;
    float height, normht;
    float age, perdif;

   /* this is the input section */
    printf("\nHow old (in years) is this child? ");
    scanf("%d", &years);
    printf("How many months since the child's birthday? ");
    scanf("%d", &months);
    age = years + months/12.0;  /* convert to total years */
    printf("Enter the child's height (in inches): ");
    scanf("%f", &height);

    normht = norm(age);
    perdif  = pcdif(height, normht);
    showit(normht, perdif);
  
    return 0;
}

float norm(float age) {
  float agedif, avght;
  agedif = age - MINAGE;
  avght = -0.25*pow(agedif,2) + 3.5*agedif + 45.0;
  return (avght);
}

float pcdif(float actual, float base) {
  return (actual - base)/base * 100.0;
}

void showit(float normht, float perdif) {
  printf("\nThe average height in inches is: %5.2f\n", normht);
  printf("The actual height deviates from the norm by: %6.2f%c\n", perdif, '%');
}
