/*Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a lowercase letter, a digit, or a special symbol*/

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90)
    {
        printf("Upper case letter");
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("lowercase letter");
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("numbers");
    }
    else if((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
    {
        printf("Special Symbol");
    }

    return 0;
}