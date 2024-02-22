/*Write a program to enter the number till the user wants and at the end it should display the count of positive, negative and zeroes entered*/

#include<stdio.h>

int main()
{
    char ch;
    int pcount = 0, ncount = 0, zcount = 0, n;

    do
    {
        
        printf("Enter number: ");
        scanf("%d", &n);
    
        if(n > 0)
        {
            pcount++;
        }
        else if(n < 0)
        {
            ncount++;
        }
        else
        {
            zcount++;
        }

        printf("Enter y/n: ");
        getchar();
        scanf("%c", &ch);
    }while(ch == 'y');
    
     printf("Positive count: %d\nNegative count: %d\nZero count: %d", pcount, ncount, zcount);

    return 0;
}