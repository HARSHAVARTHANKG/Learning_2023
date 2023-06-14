/*
Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.
*/


#include<stdio.h>
#include<stdlib.h>
float total_marks(float m1,float m2,float m3);
float percentage_total(float t);
int main()
{
    int roll_no;
    char name[50];
    float marks_physics,marks_math,marks_chemistry;

    printf("Enter Your Roll_no : ");
    scanf("%d",&roll_no);
    getchar();

    puts("Enter Your Name : ");
    gets(name);

    printf("Enter Your Physics_Mark : ");
    scanf("%f",&marks_physics);

    printf("Enter Your Math_Mark : ");
    scanf("%f",&marks_math);

    printf("Enter Your Chemistry_Mark : ");
    scanf("%f",&marks_chemistry);

    float Total = total_marks(marks_physics,marks_math,marks_chemistry);
    float Percentage = percentage_total(Total);
    
     printf("\n----------Summary-------------\n");
     printf("Roll_no    : %-10d\nName       : %-10s\nTotal      : %-10.2f\nPercentage : %-10.2f\n",roll_no,name,Total,Percentage);
    return 0;


}

float total_marks(float m1,float m2,float m3)
{
    return m1+m2+m3;
}

float percentage_total(float t)
{
    float p = t/3;
    return p;
}