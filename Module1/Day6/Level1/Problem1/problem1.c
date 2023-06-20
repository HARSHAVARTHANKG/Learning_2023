/*
Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures. 

Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };

Note: User must be able define the no. of inputs/size of the array during runtime.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[30];
    float marks;
};

int main() {
    int n;
    printf("Enter the Number of Student Data You want to provide: ");
    scanf("%d", &n);
    getchar();

    struct Student s[n];
    char str[100];

    for (int i = 0; i < n; i++) {
        printf("Enter the Student %d Data (String Format): ", i + 1);
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character

        char* token = strtok(str, " ");
        int j = 0;
        while (token != NULL && j < 3) {
            if (j == 0)
                s[i].rollno = atoi(token);
            else if (j == 1)
                strcpy(s[i].name, token);
            else if (j == 2)
                s[i].marks = atof(token);

            token = strtok(NULL, " ");
            j++;
        }
    }

    printf("\nStudent Data:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: Roll No: %d, Name: %s, Marks: %.2f\n", i + 1, s[i].rollno, s[i].name, s[i].marks);
    }

    return 0;
}
