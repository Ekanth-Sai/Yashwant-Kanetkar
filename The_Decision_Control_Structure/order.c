/*The policy follwed by a company to process customer orders is given by the following rules:
a) If a customer order quantity is less than or equal to that in stock and his credit is OK, supply the requirement.
b) If his credit is not OK, do not supply. Send him intimation
c) If his credit is OK, but the item in stock is less than his order, supply what is in stock. Intimate to him the date on which the balance will be shipped.
Write a C program to implement the company policy*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define STOCK 1000

int main()
{
    int quantity, i, left;
    char CREDIT[10], credit[10];

    printf("Enter the stock needed by the customer: ");
    scanf("%d", &quantity);

    printf("Enter whether the customers credit is acceptable: ");
    scanf("%s", CREDIT);

    for (i = 0; i < strlen(CREDIT); i++)
    {
        credit[i] = tolower(CREDIT[i]);
    }
    credit[i] = '\0';

     if (strcmp(credit, "ok") == 0 && quantity <= STOCK)
    {
        printf("Stock will be supplied");
    }
    else if(!(strcmp(credit, "ok") == 0) && quantity <= STOCK)
    {
        printf("Credit score not enough");
    }
    else if((strcmp(credit, "ok") == 0 && quantity >= STOCK))
    {
        left = quantity - STOCK;
        printf("%d number of items will be shipped to you now. %d items will be shipped at later date", STOCK, left);
    }

    return 0;

}