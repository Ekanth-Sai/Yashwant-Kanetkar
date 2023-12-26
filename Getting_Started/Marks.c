/*If the marks obtained by a student in 5 different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100*/

#include<stdio.h>
#define MAX 5

int main()
{
    int stud[MAX], sum = 0;

    printf("Enter the marks: ");

    for(int i = 0; i < MAX; i++)
    {
        scanf("%d", &stud[i]);

        sum = sum + stud[i];
    }

    int per = (sum * 100) / (MAX * 100);

    printf("Total: %d \n percentage: %d", sum, per);

    return 0;

}
