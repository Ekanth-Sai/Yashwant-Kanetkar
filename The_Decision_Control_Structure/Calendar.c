/*According to Gregorian Calendar, it was Monday on the date 01/01/01. If aany year is input through the keyboard, write a program to find out what is the day on 1st jan of that year*/

#include <stdio.h>
#include <time.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    struct tm date = { .tm_year = year - 1900, .tm_mon = 0, .tm_mday = 1 };

    time_t t = mktime(&date);

    char dayOfWeek[20];
    strftime(dayOfWeek, sizeof(dayOfWeek), "%A", &date);
    printf("January 1st, %d is a %s.\n", year, dayOfWeek);

    return 0;
}
