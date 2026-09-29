// Variables and Data Types

#include <stdio.h>//scanf() ,printf()

int main()
{
    //declare variables
    char grade ; //%c
    char name[15] ; //%s
    int age ; //%d
    float marks ; //%f
    double pi ; //%lf

    printf("Enter your grade \t");
    scanf("%c", &grade);

    printf("Enter your name: \t ");
    scanf("%14s", name);

    printf("Enter your age: \t");
    scanf("%d", &age);

    printf("Enter your marks: \t");
    scanf("%f", &marks);

    printf("Enter the value of pi: \t");
    scanf("%lf", &pi);

    printf("The grade is %c \n", grade);
    printf("My name is %s ,\n", name);
    printf("I am %d years old \n" ,age);
    printf("I scored %.2f marks in KCSE \n" ,marks);
    printf("The value of pi is %.3lf \n" ,pi);


    return 0;
}