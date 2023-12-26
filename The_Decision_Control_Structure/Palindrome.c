/*A 5 digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and the reversed numbers are equal or not*/

#include<stdio.h>

int main()
{
    int num, rev = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    int temp = num;

    while(temp != 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(num == rev)
    {
        printf("%d is a palindrome", num);
    }
    else
    {
        printf("%d is not a palindrome", num);
    }

    return 0;
}