/*A library charges a fine for every book returned late. For the first 5 days, the fine is 50 paise, for 6 - 10 days, fine is one rupee and above 10 days, fine is 5 rupees. If you return the book after 30 days, your membership will be cancelled. Write a program to accept the member of days the member is late to return the book and display the fine or the appropriate message.*/

#include<stdio.h>

int main()
{
    int days;

    printf("Enter the late days: ");
    scanf("%d", &days);

    if(days > 0 && days <= 5)
    {
        printf("The fine is Rs 0.5");
    }
    else if(days >= 6 && days <= 10)
    {
        printf("The fine is Rs 1");
    }
    else if(days > 10 && days <= 30)
    {
        printf("The fine is Rs 10");
    }

    else
    {
        printf("Membership revoked");
    }

    return 0;
}