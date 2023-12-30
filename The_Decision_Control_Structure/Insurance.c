/*An Insurance company follws the following rules to calculate the premium

1. If a person's health is excellent and the person is between 25 and 35 years of age and lives in a city and is a male, then the premium is Rs 4 per thousand and his policy cannot exceed Rs 2 lakh.
2. If a person satisfies all the above conditions except that the sex is female, then the premium is Rs 3 per thousand and her policy amount cannot exceed Rs 1 lakh
4. If a person's health is poor and the person is between 25 and 35 years of age and lives in a village and is a male, then the premium is Rs 6 per thousand and his policy cannot exceed Rs 10,000
5. In all other cases, the insurance is rejected

Write a program to output whether the person should be insured or not, his/her premium rate and the maximum amount for which he/she can be insured*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char Health[10], Region[10], Gender[10], health[10], region[10], gender[10];
    int age, i;

    printf("Enter the health condition of the applicant: ");
    scanf("%s", &Health);
    for (i = 0; i < strlen(Health); i++)
    {
        health[i] = tolower(Health[i]);
    }
    health[i] = '\0';

    printf("Enter the region of the applicant: ");
    scanf("%s", &Region);
    for (i = 0; i < strlen(Region); i++)
    {
        region[i] = tolower(Region[i]);
    }
    region[i] = '\0';

    printf("Enter the gender of the applicant: ");
    scanf("%s", &Gender);
    for (i = 0; i < strlen(Gender); i++)
    {
        gender[i] = tolower(Gender[i]);
    }
    gender[i] = '\0';

    printf("Enter the age of the applicant: ");
    scanf("%d", &age);

    if (strcmp(health, "excellent") == 0 && (age > 25 && age < 35) && strcmp(region, "city") == 0 && strcmp(gender, "male") == 0)
    {
        printf("Premium is Rs 4 per thousand\n");
        printf("Insurance cannot exceed Rs 2 lakhs");
    }
    else if (strcmp(health, "excellent") == 0 && (age > 25 && age < 35) && strcmp(region, "city") == 0 && strcmp(gender, "female") == 0)
    {
        printf("Premium is Rs 3 per thousand\n");
        printf("Insurance cannot exceed Rs 1 lakh");
    }
    else if (strcmp(health, "poor") == 0 && (age > 25 && age < 35) && strcmp(region, "village") == 0 && strcmp(gender, "male") == 0)
    {
        printf("Premium is Rs 6 per thousand\n");
        printf("Insurance cannot exceed Rs 10,000");
    }
    else
    {
        printf("Applicant rejected");
    }

    return 0;
}
