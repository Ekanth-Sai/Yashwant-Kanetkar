/*Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or on the origin*/

#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter the coordinates: ");
    scanf("%d %d", &x, &y);

    if(x == 0)
    {
        printf("point (%d, %d) lies on y-axis", x, y);
    }

    else if(y == 0)
    {
        printf("point (%d, %d) lies on x-axis", x, y);
    }

    else if(x == 0 && y == 0)
    {
        printf("point (%d, %d) lies on the origin", x, y);
    }

    return 0;
}