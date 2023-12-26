/*If a five digit number is input through the keyboard, write a program to reverse the number*/

#include<stdio.h>

int main()
{
    int num, rev = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("The reversed number is: %d", rev);

    return 0;
}