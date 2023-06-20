/*
Write a function to initialize all members in the above array of structures
*/

#include<stdio.h>

#include<string.h>

struct Student{
    int rollno;
    char name[30];
    float marks;
};

void initializeStudentData(struct Student * s,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the details for Student %d:\n", i + 1);
        
        printf("Enter Roll No: ");
        scanf("%d", &(s[i].rollno));
        getchar();
        
        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        
        printf("Enter Marks: ");
        scanf("%f", &(s[i].marks));
        getchar();
        
        printf("-----------------------------\n");
        
    }
}

int main()
{
    int n;
    printf("Enter the Number Of Student Data : ");
    scanf("%d",&n);

    struct Student s[n];

    initializeStudentData(s,n);

    for(int i=0;i<n;i++)
    {
        printf("Student %d\n",i+1);
        printf("Rollno : %d\n",s[i].rollno);
        printf("Name   : %s\n",s[i].name);
        printf("Marks  : %.2f\n",s[i].marks);
         printf("-----------------------------\n");
    }
}