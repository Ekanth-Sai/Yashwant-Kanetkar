/*The distance between 2 cities in km is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters*/

#include<stdio.h>

int main()
{
    float dist_km;

    scanf("%f", &dist_km);

    float dist_m = dist_km * 1000;
    float dist_ft = dist_km * 3280.840000;
    float dist_cm = dist_km * 100000;
    float dist_in = dist_km * 39370.100000;

    printf("meters: %f \n feet: %f \n centimeters: %f \n inches: %f", dist_m, dist_ft, dist_cm, dist_in);

    return 0;
}