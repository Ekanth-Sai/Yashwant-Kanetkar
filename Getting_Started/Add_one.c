/*If a five digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits*/

#include<stdio.h>

int main() {
    int num, ognum, newnum = 0, placeval = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    ognum = num;

    while (num > 0) {
        int digit = num % 10;

        newnum = newnum + ((digit + 1) * placeval);

        placeval *= 10;

        num = num / 10;
    }

    printf("Original Number: %d\n", ognum);
    printf("New Number: %d\n", newnum);

    return 0;
}