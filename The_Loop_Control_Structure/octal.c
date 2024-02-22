/*Write a program to receive an integer and find its octal equivalent*/

#include<stdio.h>


int main() {
    int n, i;
    int a[32]; 

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Octal equivalent: 0\n");
        return 0;
    }

   
    for (i = 0; n > 0; i++) {
        a[i] = n % 8;
        n = n / 8;
    }


    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", a[j]);
    }
    printf("\n");

    return 0;
}
