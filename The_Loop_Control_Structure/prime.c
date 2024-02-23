/*Write a program to print all the prime numbers from 1 to 300*/

#include<stdio.h>

int main()
{
    int i, j, flag = 0;

    printf("Prime numbers between 1 and 300 are: \n");
    for(i = 2; i <= 300; i++)
    {
        flag = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("%d ", i);
        }
    }
    
}