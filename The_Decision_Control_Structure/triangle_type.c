/*If the 3 sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle*/

#include<stdio.h>
#include<math.h>

int main()
{
    int s1, s2, s3;

    printf("Enter the first side: ");
    scanf("%d", &s1);

    printf("Enter the second side: ");
    scanf("%d", &s2);

    printf("Enter the third side: ");
    scanf("%d", &s3);

    if (s1 == s2 && s2 == s3)
    {
        printf("It's an equilateral triangle");
    }
    else if (s1 * s1 + s2 * s2 == s3 * s3 || s2 * s2 + s3 * s3 == s1 * s1 || s3 * s3 + s1 * s1 == s2 * s2)
    {
        printf("It's a right-angled triangle");
    }
    else if (s1 != s2 && s2 != s3 && s3 != s1)
    {
        printf("It's a scalene triangle");
    }
    else if (s1 == s2 || s2 == s3 || s3 == s1)
    {
        printf("It's an isosceles triangle");
    }

    return 0;
}
