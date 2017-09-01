//  C_for_engineers
//  Copyright © 2017 Nazaar. All rights reserved.
//Programmer: Montes, Nestor
// Panther Id: 6106215
// Assignment #:1
//Program Purpose: To answer questions in homework and show both functions used in question number 4 & 5
// Date: 08/31/2017

/*
 1. Which of the below variables are syntactically correct?
 
 income, two, fold, c3po, item
 ***********************************************************
 
 2. What is illegal about the following program fragment? 
 
 PI is a constant not variable
 ***********************************************************
 
 3. The average pH of citrus fruits is 2.2, and this value has been stored in the variable avg_citrus_pH. Provide a statement to display this information in a readable way. 
 
 printf("The average pH of citrus fruits is %f, AVG_CITRUS_PH);
************************************************************
 */

/* 4. Write a program that takes the length and width of a rectangular yard and the length and width of a rectangular house situated in the yard. Your program should compute the time required to cut the grass at the rate of two square feet a second.
 */

#include <stdio.h>

int
main(){
    FirstMain();
    SecondMain();
}

int
FirstMain() {
    int HouseSize, YardSize;
    printf("Enter size of yard in square feet :"); scanf("%d",&YardSize);
    printf("Enter size of house in square feet :"); scanf("%d",&HouseSize);
    int MowingTime = (YardSize - HouseSize)/2;
    printf("It will take %d seconds to mow your lawn\n", MowingTime);
    return 0;
}
//**********************************************************

/*5. Write a program that calculates mileage reimbursement for a salesperson at a rate of $0.35 per mile. Your program output/result should look like below sample output.
 
 MILEAGE REIMBURSEMENT CALCULATOR
 ***************************************************
 |Enter beginning odometer reading=> 13505.2       |
 |Enter ending odometer reading=> 13810.6          |
 |You traveled 305.4 miles.                        |
 |At $0.35 per mile, your reimbursement is $106.89.|
 ***************************************************
*/
int
SecondMain(void){
    float BeginningReading, EndingReading, CalculatedDistance, CalculatedCost;
    printf("Enter beginning odometer reading=> :"); scanf("%f",&BeginningReading);
    printf("Enter ending odometer reading=> :"); scanf("%f",&EndingReading);
    CalculatedDistance = EndingReading - BeginningReading;
    CalculatedCost = CalculatedDistance * 0.35;
    printf("You traveled %f miles\n", CalculatedDistance);
    printf("At $0.35 per mile, your reimbursement is %f.\n",CalculatedCost);
    return 0;
}

//**********************************************************