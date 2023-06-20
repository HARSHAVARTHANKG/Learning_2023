/*
Write a function to sort the array of structures in descending order based on marks 
*/

#include<stdio.h>
#include<limits.h>
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
        
        printf("-------------------------------------------------------\n");
        
    }
}

void displayMembers(struct Student * s ,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Student %d: Rollno: %d, Name: %s, Marks: %.2f\n", i + 1, s[i].rollno, s[i].name, s[i].marks);
        printf("---------------------------------------------------------------------------------------\n");
    }
}

void sortMembers(struct Student*s,int n)
{
   for(int i=0;i<n;i++)
   {
        for(int i=1;i<=n;i++)
        {
            if(s[i-1].marks<s[i].marks)
            {

                int temp1 = s[i-1].rollno;
                s[i-1].rollno=s[i].rollno;
                s[i].rollno=temp1;

                float temp2 = s[i-1].marks;
                s[i-1].marks = s[i].marks;
                s[i].marks=temp2;

                char temp3[30];
                strcpy(temp3,s[i-1].name);
                strcpy(s[i-1].name,s[i].name);
                strcpy(s[i].name,temp3);

            }
        }
   }  
}

int main()
{
    int n;
    printf("Enter the Number Of Student Data : ");
    scanf("%d",&n);

    struct Student s[n];

    initializeStudentData(s,n);
    printf("Before Sorting based on Marks : \n");
    displayMembers(s,n);


    printf("After Sorting Based on Marks : \n");
    sortMembers(s,n);
    displayMembers(s,n);

   
}