/*
Toggle Case
Input : 'A' 'b' 'c' 'd' '  ' 'X' 'Y' 'Z' '\0'
Output: 'a' 'B' 'C' 'D' '  ' 'x' 'y' 'z' '\0'

*/

#include<stdio.h>
void Toggle_case(char str[]);
int main()
{
    char str[100];
    printf("Enter the String : ");
    fgets(str,100,stdin);
    
    Toggle_case(str);
    printf("Toggled String : %s",str);
}

void Toggle_case(char str[])
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        else
        {
            str[i]=str[i];
        }
        i++;
    }
}