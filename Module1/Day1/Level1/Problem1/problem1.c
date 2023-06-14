/*  Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator
*/

#include<stdio.h>
int BiggestUsingIf(int n1 , int  n2);
int BiggestUsingTernary(int n1 , int  n2);
int main()
{
    int n1,n2;
    printf("Enter the Two Numbers : ");
    scanf("%d %d",&n1,&n2);
    int result1 = BiggestUsingIf(n1,n2);
    int result2 = BiggestUsingTernary(n1,n2);
    printf("Using If : The Biggest Number is %d\n",result1);
    printf("Using Ternary : The Biggest Number is %d\n",result2);
    return 0;
}

int BiggestUsingIf(int n1,int n2)
{
    if(n1>n2)
    {
        return n1;
    }
    else{
        return n2;
    }
}
int BiggestUsingTernary(int n1,int n2)
{
    return n1>n2 ? n1 : n2;
}


