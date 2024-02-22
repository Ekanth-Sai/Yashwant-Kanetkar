/*Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs 12.00 per hour for every hour worked above 40hrs. Assume that employees do not work for fractional part of an hour*/

#include<stdio.h>

int main()
{
    int i, hrs, ot, otpaid;
    int a[10] = {};

    for(i = 0; i < 10; i++)
    {
        printf("Enter hours worked: ");
        scanf("%d", &hrs);
        
        if(hrs > 40)
        {
            ot = hrs - 40;
            otpaid = 12 * ot;
            printf("Eligible for overtime. Overtime paid is: %d\n", otpaid);
            a[i] = otpaid;
        }
        else
        {
            printf("Not eligible for overtime\n");
        }
    }
    
    printf("Overtime for each employee: \n");
    for(i = 0; i < 10; i++)
    {
        printf("Employee number: %d\t", i + 1);
        printf("Employee overtime paid: %d\n", a[i]);
    }

    return 0;
}