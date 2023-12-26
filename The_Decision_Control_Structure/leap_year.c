/*Any year is input through the keyboard. Write a program to determine whether the year is leap or not*/

#include<stdio.h>

int main()
{
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if(year % 4 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}