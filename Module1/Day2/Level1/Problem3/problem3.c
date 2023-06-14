/*
Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

Topics to be covered
- Arrays
- Loops
- Basic Operators
*/

#include<stdio.h>
int Alternate_sum(int a[100],int n);
int main()
{
    int n;
    printf("Enter the Array Size : ");
    scanf("%d",&n);
    int a[100];
    printf("Enter %d Elements : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int result = Alternate_sum(a,n);

    printf("Alternate Sum : %d",result);
}

int Alternate_sum(int a[100],int n)
{
    int sum=0;

    for(int i=0;i<n;i=i+2)
    {
        sum+=a[i];
    }
    return sum;
}

