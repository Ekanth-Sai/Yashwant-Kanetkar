/*Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255*/

#include<stdio.h>

int main()
{
    char c;
    int i = 0;

    while(i <= 255)
    {
        c = i;
        
        printf("%c ", c);
        i = i + 1;
    }


    return 0;
}