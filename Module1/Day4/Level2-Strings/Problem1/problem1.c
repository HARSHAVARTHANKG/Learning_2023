/*
Elapsed date using string
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int Split_Date(char date[]);
int isleapYear(int year);
int calculate_elapsed_day(int day,int month,int year);
int main()
{
    char date[100];
    printf("Enter the Date with / : ");
    scanf("%s",date);

    int result = Split_Date(date);
    printf("\nThe no of elapsed day : %d\n",result);
    return 0;
}


int Split_Date(char date[])
{
    char arr[3][3];
    int i = 0;
    char* token = strtok(date, "/");
    do
    {
        strcpy(arr[i], token);
        i++;
    } while ((token = strtok(NULL, "/")) != NULL);

    printf("Splitted date dd,mm,yyyy :");
    for (int i = 0; i < 3; i++)
    {
        printf("%s ", arr[i]);
    }

    const char* dayString = arr[0];
    const char* monthString = arr[1];
    const char* yearString = arr[2];

    int day = atoi(dayString);
    int month = atoi(monthString);
    int year = atoi(yearString);

   return calculate_elapsed_day(day,month,year);

}

int calculate_elapsed_day(int day,int month,int year)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i = 0;
    int sum = 0;

    while (arr[i] != month) {
        sum += days[arr[i] - 1];
        i++;
    }

    sum += day;

    if (isleapYear(year) == 1 && month > 2) {
        sum++;
    }
    return sum;
}

int isleapYear(int year) 
{
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {
        return 0;
    } else {
        return 1;
    }
}

