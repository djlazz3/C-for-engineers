// Body Mass Index Calculator
#include <stdio.h>

//function main begins program execution
int main ( void ){
// get user's height
int height; // height of the person
printf( "%s", "Please enter your height (in inches): " );
scanf( "%d", &height );
// get user's weight
int weight; // weight of the person
printf( "Please enter your weight (in pounds): " );
scanf( "%d", &weight );
int BMI; // user's BMI
BMI = weight * 703 / ( height * height ); // calculate BMI
printf( "Your BMI is %d\n\n", BMI ); // output BMI
// output data to user
printf( "BMI VALUES\n" );
printf("****************************\n");
printf( "Underweight:\t If BMI is less than 18.5\n" );
printf( "Normal:\t\t If BMI is between 18.5 and 24.9\n" );
printf( "Overweight:\t If BMI is between 25 and 29.9\n" );
printf( "Obese:\t\t If BMI is 30 or greater\n" );
printf("****************************\n");
return 0;
}
