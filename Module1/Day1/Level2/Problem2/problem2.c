/*
2. Write a function to return the grade of the given student using switch case statements
90 to 100 -> 'A'
75 to 89 -> 'B'
60 to 74 -> 'C'
50 to 59 -> 'D'
36 to 49 -> 'E'
0 to 35 -> 'F'

In main check the return value and print the below
65 -> "Grade A"
66 -> "Grade B"
67 -> "Grade C"
68 -> "Grade D"
69 -> "Grade E"
70 -> "Grade F"
*/

#include<stdio.h>
char Grade(int m);
int main()
{
    int mark;
    printf("Enter Your Marks : ");
    scanf("%d",&mark);

    int result = Grade(mark);
    if(result=='U')
    {
        printf("Please enter the valid mark");
    }
    else
    {
        printf("%d -> \"Grade - %c\" ",mark,result);
    }

    
}

char Grade(int m)
{
    switch(m)
    {
        case 90 ... 100 : return 'A';
        case 75 ... 89  : return 'B';
        case 60 ... 74  : return 'C';
        case 50 ... 59  : return 'D';
        case 36 ... 49  : return 'E';
        case 0 ... 35   : return 'F';
        default : return 'U';
    }
   
}