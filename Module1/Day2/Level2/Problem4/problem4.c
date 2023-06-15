/*
Write a function xstrchr() which scans a string from beginning to end in search of a character. 
If the character is found, it should return a pointer to the first occurrence of the given character in the string.
If the given character is not found, the function returns a NULL.
The prototype of the function should be:
char *xstrchr(char *string, char ch):
*/

//------------------------------With using pointer-----------------------------------------

#include<stdio.h>
#include<string.h>
char *xstrchr(char *string, char ch);
int main()
{
    char str[100];
    char ch ;
    printf("Enter the String : ");
    fgets(str,100,stdin);
    printf("Enter the Character : ");
    scanf("%c",&ch);

    char *result = xstrchr(str,ch);

    if(result!=NULL)
    {
        printf("The Character %c found at position : %d ",ch, result-str);
    }
    else
    {
        printf("The Character %c Not found.",ch);
    }
    return 0;
    

    return 0;
}

char *xstrchr(char *string, char ch)
{
    while(*string != '\0')
    {
        if(*string == ch)
        {
            return string;
        }
        string++;
    }
    return NULL;
}


// ------------------------------------Without using pointer------------------------------------------
/*

#include<stdio.h>
#include<string.h>
int find_Position(char str[],char ch);
int main()
{
    char str[100];
    char ch ;
    printf("Enter the String : ");
    fgets(str,100,stdin);
    printf("Enter the Character : ");
    scanf("%c",&ch);

    int result = find_Position(str,ch);
    if(result!=-1)
    {
        printf("The Character %c found at position %d: ",ch, result);
    }
    else
    {
        printf("The Character %c Not found.",ch);
    }
    return 0;
}

int find_Position(char str[],char ch)
{
    int i=0;
    while(str[i]!='\0')
    {
        while(str[i]==ch)
        {
            return i;
        }
        i++;
    }
    return -1;
}

*/

