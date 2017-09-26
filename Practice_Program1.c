#include <math.h>
#include <stdio.h>

int main(void){
  double tmp, x, y;
  printf("Enter The first number\n");
  scanf( "%lf", &x );
  printf("Enter The second number\n");
  scanf( "%lf", &y );
  tmp = fabs(x - y);
  printf("The absolute difference between %.2f and %.2f is %.2f", x, y, tmp);
  return 0;
}
