/*
Write a program using structures to calculate the difference between two time periods using a user-defined function.
*/

#include<stdio.h>
#include<stdlib.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

void readTime(struct time *ptr)
{
    printf("Enter the hours : ");
    scanf("%d",&(ptr->hours));

    printf("Enter the minutes : ");
    scanf("%d",&(ptr->minutes));

    printf("Enter the Seonds : ");
    scanf("%d",&(ptr->seconds));
}

void writeTime(struct time t)
{
    printf("%dhrs:%dmin:%dsec",t.hours,t.minutes,t.seconds);
}

void diffBetweenTwoTime(struct time *ptr1,struct time *ptr2)
{
    int time1 = (ptr1->hours)*3600 + (ptr1->minutes)*60 + ptr1->seconds;
    int time2= (ptr2->hours)*3600 + (ptr2->minutes)*60 + ptr2->seconds;

    int difftwoTime = abs(time1 - time2);

    int hour = difftwoTime/3600;
    difftwoTime%=3600;

    int min = difftwoTime/60;
    difftwoTime%=60;

    int sec = difftwoTime;

    printf("\nThe Difference Between Two Time period : %dhrs:%dmin:%dsec",hour,min,sec);

}

int main()
{
    struct time t1,t2;

    printf("Enter the First Time (hours minutes seconds) : \n");
    readTime(&t1);

    printf("Enter the Second Time (hours minutes seconds) : \n");
    readTime(&t2);


    printf("-----------------------------Result------------------------------");
    printf("\nThe first Time is                      : ");
    writeTime(t1);

    printf("\nThe second Time is                     : ");
    writeTime(t2);

    diffBetweenTwoTime(&t1,&t2);
    printf("\n----------------------------------------------------------------");
}