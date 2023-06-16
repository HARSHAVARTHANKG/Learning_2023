/*
Convert String as Integer
Input String = '5' '2' '7' '8' '\0
output :5278
*/

#include<stdio.h>
int String_To_Number(char str[]);
int main()
{
    char str_number[100];

    printf("Enter the String Number : ");
    scanf("%s",str_number);

    int result = String_To_Number(str_number);
    printf("String Converted to Number : %d",result);
}

int String_To_Number(char str[])
{
    int number =0;
    int i=0;
    while(str[i]!='\0')
    {
        number= (number * 10) + (str[i]-'0');
        i++;
    }
    return number;
}