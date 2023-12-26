/*Find the absolute value of a number entered through the keyboard*/

#include<stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num >= 0)
    {
        printf("The absolute value of the entered number is %d", num);
    }

    else
    {
        int temp = 0 - num;
        printf("The absolute value of the enetered number is %d", temp);
    }

    return 0;
}
