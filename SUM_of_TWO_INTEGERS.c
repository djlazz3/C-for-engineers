/*
   Program to calculate the sum of two integers number
*/
#include <stdio.h>
int main()
{
  int num1, num2, sum;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);
      sum = num1 + num2;
    printf("Sum of %d and %d is %d\n", num1,num2,sum);

}
