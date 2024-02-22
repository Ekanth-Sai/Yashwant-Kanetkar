/*Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to teh number itself, then the number is called an armstrong number*/

#include<stdio.h>
#include<math.h>

int main()
{
    int n, a, i;

    for(i = 1; i <= 500; i++)
    {   
        n = i;
        int sum = 0;

        while(n != 0)
        {
            a = n % 10;
            sum = sum + a * a * a;
            n = n / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
        
    }
}