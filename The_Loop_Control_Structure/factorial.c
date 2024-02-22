/*Write a program to find the factorial value of any numver entered through the keyboard.*/

#include<stdio.h>

int main()
{
    long int fact = 1, i, n;

    printf("Enter the number: ");
    scanf("%ld", &n);
    
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("The factorial of %ld is %ld", n, fact);

    return 0;
}