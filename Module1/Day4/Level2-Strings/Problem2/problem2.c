/*
Rotate String
*/


#include<stdio.h>
#include<string.h>
char * rotate_Left(char str[],int k);
char * rotate_Right(char str[],int k);
int main()
{
    char str[100];
    printf("Enter the String : ");
    scanf("%s",&str);

    int k;
    printf("Enter Rotating times : ");
    scanf("%d",&k);

    int choice;
    printf("1. Rotate Left\n2. Rotate Right\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 : 
        {
            char * result1 = rotate_Left(str,k);
            printf("%s",result1);
            break;
        }
        case 2 :
        {
            char * result2 = rotate_Right(str,k);
            printf("%s",result2);
            break;
        }
        default : 
        {
            printf("Enter correct Choice.");
            break;
        }

    }
    return 0;
}

char * rotate_Left(char str[],int k)
{
    int len =strlen(str);
    while(k>0)
    {
       char temp = str[0];
       for(int i=1;i<=len;i++)
       {
            str[i-1]=str[i];
       }
       str[len-1]=temp;
       k--;
    }
    return str;
}

char * rotate_Right(char str[],int k)
{
    int len =strlen(str);
    while(k>0)
    {
       char temp = str[len-1];
       for(int i=len-1;i>=0;i--)
       {
          str[i]=str[i-1];
       }
       str[0]=temp;
       k--;
    }
    return str;
}
