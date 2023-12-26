/*Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D*/

#include<stdio.h>

int main()
{
    int C, D;

    printf("Enter the numbers: ");
    scanf("%d %d", &C, &D);

    int temp = C;
    C = D;
    D = temp;

    printf("C and D are: %d %d", C, D);

    return 0;
}