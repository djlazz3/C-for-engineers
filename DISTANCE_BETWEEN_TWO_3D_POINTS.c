#include <math.h>
#include <stdio.h>

int main(void){
  double x1, y1, z1, x2, y2, z2, distance;
  printf("Please enter the first 3d point in the format (x,y,z)\n");
  scanf("%lf,%lf,%lf", &x1, &y1, &z1);
  printf("Please enter the second 3d point in the format (x,y,z)\n");
  scanf("%lf,%lf,%lf", &x2, &y2, &z2);
  distance = sqrt(pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));
  printf("The distance between the two points is: %lf", distance);
  return 0;
}
