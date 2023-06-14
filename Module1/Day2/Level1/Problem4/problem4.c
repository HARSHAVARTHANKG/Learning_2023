/*
Write a program to find total number of bits set in a given array.
Say we have a array of 3 elements
a[3] = {0x1, 0xF4, 0x10001};
The total number of set bits in the given array is
1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits

*/

#include<stdio.h>
int count_of_setBits(int n);
int main()
{
    int n;
    printf("Enter the array Size : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%x",&arr[i]);
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=count_of_setBits(arr[i]);
    }

    printf("The Sum of SetBits : %d",sum);
}

int count_of_setBits(int n)
{
   int count=0;
   while(n!=0)
   {
       n=n&(n-1);
       count++;
   }
    return count;
}