#include <stdio.h>
#define PRICE_PER_MILE 0.35
int main(void)
{
  double initialReading, finalReading, distance, reinbursement;
  printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
  printf("************************************\n");
  printf("Enter beginning odometer reading=> ");
  scanf("%lf", &initialReading);
  printf("Enter ending odometer reading=> ");
  scanf("%lf", &finalReading);
  distance = finalReading - initialReading;
  printf("You traveled %.1f miles.\n", distance);
  reinbursement = distance * PRICE_PER_MILE;
  printf("At $%.2f per mile, your reinbursement is $%.2f.\n", PRICE_PER_MILE, reinbursement);
  printf("*************************************");
  return 0;
}
