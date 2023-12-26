/*The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle*/

#include<stdio.h>
#define PI 3.14

int main()
{
    float len;
    float br;

    printf("Enter the length and breadth: ");
    scanf("%f %f",&len, &br);
    
    float ar_r = len * br;
    float per = 2 * (len + br);

    printf("Perimeter of rectangle is: %f \nArea of rectangle is: %f\n", per, ar_r);

    float rad;

    printf("Enter the radius: ");
    scanf("%f", &rad);

    float ar_c = PI * rad * rad;
    float circ = 2 * PI * rad;

    printf("Circumference of circle is: %f \narea of circle is: %f", circ, ar_c);

    return 0;
}