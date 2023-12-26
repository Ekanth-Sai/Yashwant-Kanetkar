/*Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert the temperatures into centigrade degrees*/

#include<stdio.h>

int main()
{
    float fah;

    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &fah);

    float cen = (fah - 32) * 0.555555;

    printf("Temperature in celsisus degrees is: %f", cen);

    return 0;
}