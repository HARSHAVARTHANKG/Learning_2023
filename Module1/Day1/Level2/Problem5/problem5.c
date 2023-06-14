/*
Write a function to find the type of the character passed
    - 'A' to 'Z', return 1
    - 'a; to 'z', return 2
    - '0' to '9', return 3
    - Any Other printable symbols, return 4
    - Non printable symbols, return 5 
*/

#include<stdio.h>
int character_Type(char c);
int main()
{
    char c ;
    printf("Enter the Character : ");
    scanf("%c",&c);

    int result = character_Type(c);
    if(result == 1)
    {
        printf("The character is UpperCase Alphabet");
    }
    else if(result==2)
    {
        printf("The character is LowerCase Alphabet");
    }
    else if(result==3)
    {
        printf("The character is Number");
    }
    else if(result==4)
    {
        printf("The character is Printable Symbol");
    }
    else
    {
        printf("The character is Non-Printable Symbol");
    }

}

int character_Type(char c)
{
   if(c>=65 && c<=90){ return 1; }
   else if(c>=97 && c<=122){ return 2; }
   else if(c>=48 && c<=57){ return 3; }
   else if(c>=33 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96){ return 4; }
   else { return 5; }
}