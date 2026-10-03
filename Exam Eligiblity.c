/*
Week 3 Assignment
Task 1
A program to check if the student is eligible for final exam
*/

#include<stdio.h>

int main()
{
    int attendance;      //%d
    float marks;         //%f

    //Prompt the user to enter attendance percentage and marks obtained

    printf("Enter the attendance percentage:\n");
    scanf("%d", &attendance);

    printf("Enter the marks obtained:\n");
    scanf("%f", &marks);

    if(attendance >= 75 && marks >= 40)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not Eligible\n");
    }

    return 0;
}