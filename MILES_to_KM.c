/*
    Convert distance in miles to kilometers
*/

#include <stdio.h>
#define KMS_PER_MILE 1.609

int main(){
  double miles,         // input distance in miles
         kms;           // output distance in kilometers
         //get distance in miles
            printf("Enter the distance in miles \n");
            scanf("%lf", &miles);
        //convert the distance in miles to kilometers
            kms = KMS_PER_MILE * miles;
        //display the distance in kilometers
            printf(" That equals %lf kilometers \n", kms);
            return(0);
}
