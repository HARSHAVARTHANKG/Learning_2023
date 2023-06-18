/*
Elapsed time 
*/

#include <stdio.h>

int isleapYear(int year);

int main() {
    int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days;
    int month;
    int year;

    printf("Enter the Days: ");
    scanf("%d", &days);
    getchar();
    printf("Enter the Month: ");
    scanf("%d", &month);
    getchar();
    printf("Enter the Year: ");
    scanf("%d", &year);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int i = 0;
    int sum = 0;

    while (arr[i] != month) {
        sum += day[arr[i] - 1];
        i++;
    }

    sum += days;

    if (isleapYear(year) == 1 && month > 2) {
        sum++;
    }

    printf("Number of Days Elapsed: %d", sum);
}

int isleapYear(int year) {
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {
        return 0;
    } else {
        return 1;
    }
}
