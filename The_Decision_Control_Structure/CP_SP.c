/*If cost price ad selling price of an item is input thrugh the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred*/

#include<stdio.h>

int main()
{
    int sp, cp, pro, los;

    printf("Enter the selling price: ");
    scanf("%d", &sp);

    printf("Enter the cost price: ");
    scanf("%d", &cp);

    if(sp > cp)
    {
        pro = sp - cp;
        printf("Profit earned is %d", pro);
    }
    else if(cp > sp)
    {
        los = cp - sp;
        printf("Loss incurred is %d", los);
    }
    else
    {
        printf("BEP achieved");
    }

    return 0;
}