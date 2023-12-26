/*Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.*/

#include<stdio.h>

int main()
{
    int len, wid, area, per;

    printf("Enter the length and width of the rectangle: ");
    scanf("%d %d", &len, &wid);

    per = 2 * (len + wid);
    area = len * wid;

    if(area > per)
    {
        printf("Area greater than the perimeter");
    }
    else
    {
        printf("Perimeter greater than the area");
    }

    return 0;
}