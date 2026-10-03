/*
Weekly Assignment
Week 1 Task 2
A C program that prompts the user for their personal details
and displays them.
Personal Details e.g. Phone Number
*/

#include <stdio.h> // printf(), scanf()

int main() {

    // Declare variables for personal details

    char name[15];                  // %s - user's name
    char main_number[20];           // %s - main phone number
    char alternative_number[20];    // %s - alternative phone number
    float height_cm;                // %f - height in centimetres
    double bank_balance_ksh;        // %lf - bank balance in Kenyan Shillings

    // Prompt the user to enter their personal details

    printf("Enter your name: \t");
    scanf("%14s", name);

    printf("Enter your main phone number: \t");
    scanf("%19s", main_number);

    printf("Enter your alternative phone number: \t");
    scanf("%19s", alternative_number);

    printf("Enter your height in cm: \t");
    scanf("%f", &height_cm);

    printf("Enter your bank balance in Ksh: \t");
    scanf("%lf", &bank_balance_ksh);

    // Display the personal details entered by the user

    printf("\nPersonal Details:\n");
    printf("Name: %s\n", name);
    printf("Main Phone Number: %s\n", main_number);
    printf("Alternative Phone Number: %s\n", alternative_number);
    printf("Height: %.2f cm\n", height_cm);
    printf("Bank Balance: %.2lf Ksh\n", bank_balance_ksh);

    return 0;
}