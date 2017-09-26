#include <math.h>
#include <stdio.h>

int main(void){
  double price, downPayment, interestRate, payments, monthlyPayment;
  printf("Please enter the purchase price of the car\n");
  scanf("%lf", &price);
  printf("Please enter the down payment on the car\n");
  scanf("%lf", &downPayment);
  printf("Please enter the interest rate on the loan\n");
  scanf("%lf", &interestRate);
  printf("Please enter the amount of payments\n");
  scanf("%lf", &payments);
  monthlyPayment = (interestRate*(price-downPayment))/(1-pow((1+interestRate), -payments));
  printf("The monthly payment for the loan is: %lf \n", monthlyPayment);
  return 0;
}
