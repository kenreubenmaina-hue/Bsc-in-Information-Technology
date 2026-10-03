/*
Week 2 Assignment
Task 1 
Volume and Surface Area of a Cylinder
Prompt to a user to enter the radius and height of a cylinder, then calculate and display the volume and surface area of the cylinder.
*/

#include <stdio.h> //printf(); scanf();

#define PI 3.142


int main() {
    //Declaring variables

    float radius;
    float  height;

    float volume;
    float  surface_area;

    //Prompt to the User

    printf("Enter radius: \t ");
    scanf("%f", &radius);

    printf("Enter height: \t ");
    scanf("%f", &height);

    //Formulas

    volume = PI * radius * radius * height;

    surface_area = 2 * PI * radius * radius+ 2 * PI * radius * height;

    // Display/Output on the Screen
                 

    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surface_area);

    return 0;
}



