/*
write a program to Store Data for n students in Structures Dynamically. 
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct studentsData {
    int rollno;
    char name[30];
    int age;
} student;

void readData(student *ptr, int i) {
    printf("Enter the Student %d Details:\n", i + 1);
    
    printf("Enter the Roll no: ");
    scanf("%d", &(ptr->rollno));
    getchar();

    printf("Enter the Name: ");
    fgets(ptr->name, 30, stdin);

    printf("Enter Your Age: ");
    scanf("%d", &(ptr->age));
}

void writeData(student *s, int i) {
    printf("The Details of Student %d:\n", i + 1);
    printf("Roll No : %d\n", s->rollno);
    printf("Name    : %s", s->name);
    printf("Age     : %d\n", s->age);
}

int main() {
    int n;
    printf("Enter the Number Of Students: ");
    scanf("%d", &n);

    student *ptr = (student*)malloc(n * sizeof(student));

    if (ptr == NULL) {
        printf("Memory Not Available!!!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        readData(&ptr[i], i);
        printf("\n");
    }

    printf("--------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        writeData(&ptr[i], i);
        printf("\n");
    }

    printf("--------------------------------------------------------------------------");

    free(ptr);

    return 0;
}