/*If the total selling price of an item and the total profit earned on them is input through the keyboard, write a program to find the cost price of one item*/

#include<stdio.h>

int main()
{
    int sp, pro, cp;

    printf("Enter the selling price: ");
    scanf("%d", &sp);

    printf("Enter the profit: ");
    scanf("%d", &pro);

    cp = sp - pro;

    printf("The cost price is: %d", cp);

    return 0;
}