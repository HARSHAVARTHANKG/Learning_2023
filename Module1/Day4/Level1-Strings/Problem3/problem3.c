/*
Compute Total Seconds
Input String hh,mm,ss
Total Seconds"10:12:50" 10, 12, 50 
10*3600+12*60+50
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Split_time(char time[]);

int main()
{
    char time[100];
    printf("Enter the Time with ':' : ");
    scanf("%s", time);

    int result = Split_time(time);
    printf("\nThe sum of Time : %d\n", result);

    return 0;
}

int Split_time(char time[])
{
    char arr[3][3];
    int i = 0;
    char* token = strtok(time, ":");
    do
    {
        strcpy(arr[i], token);
        i++;
    } while ((token = strtok(NULL, ":")) != NULL);

    printf("Splitted Time hh,mm,ss :");
    for (int i = 0; i < 3; i++)
    {
        printf("%s ", arr[i]);
    }


    const char* hourString = arr[0];
    const char* minuteString = arr[1];
    const char* secondString = arr[2];

    int hour = atoi(hourString);
    int min = atoi(minuteString);
    int sec = atoi(secondString);

    int res = (hour * 3600) + (min * 60) + sec;
    return res;
}

