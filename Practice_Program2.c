#include <math.h>
#include <stdio.h>

int square(int y);
int main(void){
  int num;
    printf("Please enter a number\n");
    scanf("%d", &num);
    printf("You have entered %d to find the square value \n", num);
    printf("The square value of %d is %d\n", num, square(num));
    return 0;
}
int square(int y){
  return y*y;
}
