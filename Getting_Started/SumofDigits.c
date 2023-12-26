/*If a five digit number is input through the keyboard, write a  program to calculate the sum of its digits*/

#include<stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        int rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("The sum of the digits is: %d", sum);

    return 0;
}