/*
Patern Generator:
Write a program to print the given pattern below using 3 functions 
(1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 
3rd to accept the n and print from n to 1)
1234554321
1234    4321
123        321
12            21
1                1

Concepts to be used.
- Loops
*/

#include<stdio.h>
int main()
{
    int n,s,n1;
    printf("Enter the n valule : ");
    scanf("%d",&n);
    printf("Enter the s value : ");
    scanf("%d",&s);
    printf("Enter the n1 valule : ");
    scanf("%d",&n1);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf("%d",j+1);
        }

        for(int j=0;j<i;j++)
        {
            printf(" ");
        }

        for(int j=0;j<n;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("%d",n1-j);
            }
        }
        printf("\n");
    }

}