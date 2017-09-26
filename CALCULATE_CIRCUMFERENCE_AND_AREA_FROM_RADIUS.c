#include <math.h>
#include <stdio.h>
#define PI 3.14159

double area(double radius);
double circumference(double radius);

int main(void){
  double radius;
  printf("Please enter a the radius of the circle\n");
  scanf("%lf", &radius);
  printf("The area of the circle is:%lf \n", area(radius));
  printf("The circumference of the circle is:%lf \n", circumference(radius));
  return 0;
}

double area(double radius){
  return (PI * pow(radius,2));
}

double circumference(double radius){
  return (2 * PI * radius);
}
