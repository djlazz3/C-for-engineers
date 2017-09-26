#include <math.h>
#include <stdio.h>

int main(void){
  double a,b,c;
  printf("Please enter the length of the first leg\n");
  scanf("%lf", &a);
  printf("Please enter the length of the second leg\n");
  scanf("%lf", &b);
  c = sqrt(pow(a,2) + pow(b,2));
  printf("The length of the hypotenuse is: %lf", c);
}
