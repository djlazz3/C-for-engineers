#import <stdio.h>

int main(){
   int miles;
   printf("%s", "Please enter the total miles driven per day: " );
   scanf( "%d", &miles );

   int gasCost;
   printf("%s", "Please enter the cost per gallon of gasoline: " );
   scanf( "%d", &gasCost );

   int mpg;
   printf("%s", "Please enter average miles per gallon: " );
   scanf( "%d", &mpg );

   int parkFee;
   printf("%s", "Please enter the parking fees per day: " );
   scanf( "%d", &parkFee );

   int tolls;
   printf("%s", "Please enter the tolls per day: " );
   scanf( "%d", &tolls );

   int total;
   total = tolls + parkFee + (miles / mpg) * gasCost;

   printf( "Your daily cost of driving to work is $%d\n", total )
   return(0)
}
