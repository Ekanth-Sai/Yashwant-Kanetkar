/*In a company, worker efficiency is determined on the basis of the time required for a worker to complete a particular job. If the time taken by the worker is between 2 - 3 hours, then the worker is said to be highly efficient. If the time required by the worker is between 3 - 4 hours, then the worker is ordered to improve speed. if the time is between 4 - 5 hours, the worker is given training to improve his speed, and if the time taken by the worker is more than 5 hours, then the worker has to leave the company. If the time taken by the worker is input through the keyboard, find the efficiency of the worker*/

#include<stdio.h>

int main()
{
    float work;

    printf("Enter the time taken for a worker: ");
    scanf("%f", &work);

    if(work > 2 && work < 3)
    {
        printf("Comrade is highly efficient");
    }
    else if(work > 3 && work < 4)
    {
        printf("Comrade needs to improve speed");
    }
    else if(work > 4 && work < 5)
    {
        printf("Comrade needs training to improve speed");
    }
    else
    {
        printf("Comrade should be terminated");
    }

    return 0;
}