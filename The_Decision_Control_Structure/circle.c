/*Given the coordinates (x, y) of the center of a circle and its radius, write a program which will determine whether a point lies inside the circle, on the cicle or outside the circle*/

#include<stdio.h>
#include<math.h>

int main()
{
    int h, k, rad, x, y;

    printf("Enter the coordinates of the center of the circle: ");
    scanf("%d %d", &h, &k);

    printf("Enter the radius: ");
    scanf("%d", &rad);

    printf("Enter the check coordinates: ");
    scanf("%d %d", &x, &y);

    float dist = sqrt(pow(x - h, 2) + pow(y - k, 2));

    if(dist > rad)
    {
        printf("point (%d, %d) lies outside the circle", x, y);
    }

    else if(dist == rad)
    {
        printf("point (%d, %d) lies on the circle", x, y);
    }
    else
    {
        printf("point (%d, %d) lies inside the circle", x, y);
    }

    return 0;
}