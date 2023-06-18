/*
Given a string, check if it’s in valid e-mail format, 
username@domain.extusername should be alphanumeric or dot is allowed
Domain name and Extension should be alphabets and lower case only
*/

#include<stdio.h>
int isValidEmail(char email[]);
int main()
{
    char email[100];
    printf("Enter your email : ");
    scanf("%s",email);

    if(isValidEmail(email)==1)
    {
        printf("Valid Email Address...");
    }
    else
    {
        printf("InValid Email Address...");
    }
}

int isValidEmail(char email[])
{
    int i=0;
    int flag =0;
   while (email[i] != '@') 
   {
    if (((email[i] >= 'A' && email[i] <= 'Z') ||
          (email[i] >= 'a' && email[i] <= 'z') ||
          (email[i] >= '0' && email[i] <= '9') ||
          (email[i] == '.'))) {
        flag=1;
    }
    else
    {
          return 0;
    }
    i++;
   }

   i++;

   while(email[i]!='.')
   {
    if((email[i] >= 'a' && email[i] <= 'z'))
    {
        flag=1;
    }
    else
    {
          return 0;
    }

    i++;
   }

   i++;

   while(email[i]!='\0')
   {
    if((email[i] >= 'a' && email[i] <= 'z'))
    {
        flag=1;
    }
    else
    {
         return 0;
    }
    i++;
   }

   return flag;

    
}