/*Write a program to check whether a traingle is valid or not when the 3 angles of the triangle are entered through the keyboard. A triangle is valid if he sum of all the 3 angles sum up to 180 degrees*/

#include<stdio.h>

int main()
{
    float ang1, ang2,ang3;

    printf("Enter the angles of the triangle: ");
    scanf("%f %f %f", &ang1, &ang2, &ang3);

    if(ang1 + ang2 + ang3 == 180)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }

    return 0;
}