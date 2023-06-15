/*. Write a program to encode any given string such that it gets converted into an unrecognizable form. 
Also write a decode function to get back the original string.*/

#include<stdio.h>
#include<string.h>
void Encode_string(char str[]);
void Decode_string(char str[]);
int main()
{
    char str[100];
    printf("Enter the String : ");
    fgets(str,100,stdin);
    Encode_string(str);



    return 0;

}

void Encode_string(char str[])
{
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        str[i]=str[i]+2;
    }
    printf("The Encoded String : ");
    fputs(str,stdout);
    Decode_string(str);
}

void Decode_string(char str[])
{
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        str[i]=str[i]-2;
    }
    printf("The Decoded String : ");
    fputs(str,stdout);
}