/*A university has the following rules for a student to qualify for a degree with A as the main subject and B as the subsidary subject:
a) He should get 55% or more in A and 45% or more in B
b) If he gets less than 55% in A, he should get 55% or more in B. However, he should get at least 45% in A
c) If he gets less than 45% in B and 65% or more in A, he is allowed to reappear in an examination in B to qualify
d) In all other cases, he is declared to have failed.
Write a program to receive marks in A and B and output whether the student had passes, failed or is allowed to reappear in B.*/

#include<stdio.h>

int main()
{
    int A, B;

    printf("Enter the marks in A: ");
    scanf("%d", &A);

    printf("Enter the marks in B: ");
    scanf("%d", &B);

    if(A >= 55 && B >= 45)
    {
        printf("You have passed the subject!");
    }
    else if((A >= 45 && A < 55) && B >= 55)
    {
        printf("You have passed the subject!");
    }
    else if(B < 45 && A > 65)
    {
        printf("You are allowed for re-examination");
    }
    else
    {
        printf("You failed! Better luck next time");
    }

    return 0;
}