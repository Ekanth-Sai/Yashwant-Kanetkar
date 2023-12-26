/*In a town, the percentage of men is 52. The percentage of totl literacy is 48. If total percentage of literate men is 35 of the total population, write a program to find the total number of illiterate men and women if the population of the town is 80,000*/

#include<stdio.h>
#define TOT 80000

int main()
{
    int men = 0.52 * TOT;
    int lit = 0.48 * TOT;
    int lit_men = 0.35 * TOT;
    int ill = TOT - lit;

    printf("Illitrate people are: %d", ill);

    return 0;
}