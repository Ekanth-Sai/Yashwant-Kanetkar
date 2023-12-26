/*If the ages of Ram, Shyam and Ajay are input through he keyboard, write a program to determine the youngest of the three*/

#include<stdio.h>

int main()
{
    int ram, shyam, ajay, temp;

    printf("Enter the ages of Ram, Shyam and Ajay: ");
    scanf("%d %d %d", &ram, &shyam, &ajay);

    if(ram > shyam)
    {
        temp = ram;
        ram = shyam;
        shyam = temp;
    }

    if(shyam > ajay)
    {
        temp = shyam;
        shyam = ajay;
        ajay = temp;
    }

    if(ram > shyam)
    {
        temp = ram;
        ram = shyam;
        shyam = temp;
    }

    printf("The ascending ages are: %d %d %d", ram, shyam, ajay);

    return 0;
}