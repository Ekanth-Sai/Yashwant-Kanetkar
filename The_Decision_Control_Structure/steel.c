/*A certain grade of steel is graded according to the following conditions:
1. Hardness must be greater than 50
2. Carbon content must be less than 0.7
3. Tensile strength must be greater than 5600

The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions 1 and 2 are met
Grade is 8 if conditions 2 and 3 are met
Grade is 7 if conditions 1 and 3 are met
Grade is 6 if only one condition is met
Grade is 5 if none are met*/

#include<stdio.h>

#define HARDNESS 50
#define CARBON 0.7
#define TENSILE 5600
int main()
{
    int hard, tensile;
    float carbon;

    printf("Enter the hardness: ");
    scanf("%d", &hard);

    printf("Enter the carbon content: ");
    scanf("%f", &carbon);

    printf("Enter the tensile strength: ");
    scanf("%d", &tensile);

    if(hard > HARDNESS && carbon < CARBON && tensile > TENSILE)
    {
        printf("Grade 10");
    }
    else if(hard > HARDNESS && carbon < CARBON)
    {
        printf("Grade 9");
    }
    else if(carbon < CARBON && tensile > TENSILE)
    {
        printf("Grade 8");
    }
    else if(hard > HARDNESS && tensile > TENSILE)
    {
        printf("Grade 7");
    }
    else if(hard > HARDNESS || tensile > TENSILE || carbon < CARBON)
    {
        printf("Grade 6");
    }
    else
    {
        printf("Grade 5");
    }

    return 0;
}