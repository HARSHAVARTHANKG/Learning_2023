
/*
Write a function to perform a search operation on the array of structures based on name of the student
*/

#include<stdio.h>
#include<string.h>

struct Student
{
    int rollno;
    char name[30];
    float marks;
};

void initializeStudentData(struct Student * s, int n)
{
    for(int i = 0; i < n; i++)
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

void searchStudentByName(struct Student *s, int n, const char *name) {
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(s[i].name, name) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", s[i].rollno);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Sorry!!!, Student Not Found!\n");
    }
}

int main()
{
    int n;
    printf("Enter the Number Of Student Data: ");
    scanf("%d", &n);
    getchar();

    struct Student s[n];

    initializeStudentData(s, n);

    char search_name[30];
    printf("Enter the Searching Data Name: ");
    fgets(search_name, sizeof(search_name), stdin);
    search_name[strcspn(search_name, "\n")] = '\0';

    searchStudentByName(s, n, search_name);
   
    return 0;
}
