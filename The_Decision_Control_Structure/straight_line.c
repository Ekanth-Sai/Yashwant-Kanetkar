/*Given 3 points (x1, y1), (x2, y2) and (x3, y3) write a program to check if all the three points fall on the straight line*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;

    printf("Enter the coordinates x1, y1, x2, y2, x3, y3: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    int s1 = x1 * (y2 - y3);
    int s2 = x2 * (y3 - y1);
    int s3 = x3 * (y1 - y2);

    int check = 0.5 * abs(s1 + s2 + s3);

    if(check == 0)
    {
        printf("Collinearity is maintained");
    }
    else
    {
        printf("No collinearity");
    }

    return 0;
}