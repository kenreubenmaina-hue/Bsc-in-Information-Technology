/*
Week 2 assignment
Task 2
Bank loan program
Bank loan to a customer if the below conditions are met
*/

#include<stdio.h>

int main(){

    //Declaring variables
    int age;               //%d
    float annual_income;    // %f

    //Prompt to the user to enter their age and annual income

    printf("Enter your age: \t ");
    scanf("%d", &age);

    printf("Enter your annual income: \t ");
    scanf("%f", &annual_income);

    //Conditions to check if the customer is eligible for a loan

    if(age >= 21 && annual_income>= 21000){
        printf("Congratulations, you qualify for a loan \n");
    }
    else{
        printf("Unfortunately, we are unable to offer you a loan at this time \n");
    }

    return 0;

}