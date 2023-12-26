/*If a 4 digit number is input through th keyboard, write a program to obtain the sum of the first and the last digit of this number*/

#include<stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    int last = num % 10;

    while(num >= 10)
    {
        num = num / 10;
    }

    sum = sum + num + last;

    printf("The sum of the first and last digits of the number is: %d", sum);

    return 0;
}