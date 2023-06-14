/*
 Write a function to find if a give character is vowel using switch case statements, 
    - If vowel, return 1
    - If not vowel, return 0;

In main print,
"Vowel" if return value is 1
"Not Vowel" if return value is 1
*/

#include<stdio.h>
int vowelOrNot(char c);
int main()
{
    char c;

    printf("Enter the Character : ");
    scanf("%c",&c);

    int result = vowelOrNot(c);
    if(result == 1)
    {
        printf("The given Character is Vowel");
    }
    else
    {
         printf("The given Character is Not a Vowel");
    }
}

int vowelOrNot(char c)
{
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': return 1;
        default : return 0;
    }
}