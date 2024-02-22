/*2 numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another*/

#include<stdio.h>

int main()
{
    int a, b, res = 1, i;

    printf("Enter the base: ");
    scanf("%d", &a);

    printf("Enter the power: ");
    scanf("%d", &b);

    for(i = 0; i < b; i++)
    {
        res = res * a;
    }

    printf("%d raised to the power of %d is %d", a, b, res);

    return 0;
}