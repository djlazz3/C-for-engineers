#include <stdio.h>
#define RATE 2
int main(void)
{
  double yardLength, yardWidth, yardArea, houseLength, houseWidth, houseArea, areaLeft, timeTaken;
  printf("Enter The length of the yard (in feet)\n");
  scanf("%lf", &yardLength);
  printf("Enter The width of the yard (in feet)\n");
  scanf("%lf", &yardWidth);
  printf("Enter The length of the house (in feet)\n");
  scanf("%lf", &houseLength);
  printf("Enter The width of the house (in feet)\n");
  scanf("%lf", &houseWidth);
  yardArea = yardLength * yardWidth;
  houseArea = houseLength * houseWidth;
  areaLeft = yardArea - houseArea;
  timeTaken = areaLeft / RATE;

  printf("The time required to cut the grass is: %f seconds", timeTaken);
  return 0;
}
