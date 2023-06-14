/*
Write a function to return the greatest of 3 number using if else if.
*/

#include<stdio.h>
int greatest(int n1,int n2 ,int n3);
int main()
{
   int num1,num2,num3;
   printf("Enter the Number1 : ");
   scanf("%d",&num1);
   printf("Enter the Number2 : ");
   scanf("%d",&num2);
   printf("Enter the Number3 : ");
   scanf("%d",&num3);

   int result = greatest(num1,num2,num3);
   printf("The Biggest No is %d",result);
}

int greatest(int n1,int n2,int n3)
{
    if(n1>n2 && n1>n3)
    {
        return n1;
    }
    else if(n2>n1 && n2>n3)
    {
        return n2;
    }
    else
    {
        return n3;
    }
    
}