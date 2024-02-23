/*Write a program to find the range of a set of numbers. Range is teh difference between the smallest and the biggest number in the list*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int range = a[n - 1] - a[0];

    printf("Range: %d", range);

    return 0;
}