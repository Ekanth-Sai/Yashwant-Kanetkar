/*Ramesh's basic salary is input through th keyboard. His dearness allowance is 40% of basic salary, and house rent alloance is 20% of basic salary. Write a program to calculate gross salary*/

#include<stdio.h>

int main()
{
    float sal;
    
    printf("Enter the salary: ");
    scanf("%f", &sal);

    float de_all = 0.4 * sal;
    float ho_re_all = 0.2 * sal;

    float gr_sal = sal - (de_all + ho_re_all);

    printf("The gross salary is: ");
    printf("%f", gr_sal);

    return 0;
}