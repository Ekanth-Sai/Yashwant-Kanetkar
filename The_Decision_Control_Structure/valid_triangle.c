/*If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not*/

#include<stdio.h>

int main()
{
    float s1, s2, s3;

    printf("Enter the value of side 1: ");
    scanf("%f", &s1);

    printf("Enter the value of side 2: ");
    scanf("%f", &s2);

    printf("Enter the value of side 3: ");
    scanf("%f", &s3);

    if(s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Invalid triangle");
    }

    return 0;
}