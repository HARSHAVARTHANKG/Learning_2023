/*
    Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F"
*/

#include<stdio.h>
char Grade(int m);
int main()
{
    int m;
    printf("Enter the Student Percentage : ");
    scanf("%d",&m);
    char g = Grade(m);
    printf("The Grade Of Student is %c",g);
    return 0;
}

char Grade(int m)
{
    if(m>=90 && m<=100)
    {
        return 'A';
    }
    else if(m>=75 && m<=89)
    {
        return 'B';
    }
    else if(m>=60 && m<=74)
    {
        return 'C';
    }
    else if(m>=50 && m<=59)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}
