/*
Diff between even & odd elements 
64 84 21 36 17 90 77 10 48 55
*/

#include<stdio.h>
int sum_Odd_Element(int arr[],int n);
int sum_Even_Element(int arr[],int n);
int main()
{
    int n;
    printf("Enter the Array Size : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the Array Elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

     printf("Result : \n");
    int sum_even = sum_Even_Element(arr,n);
    int sum_odd  = sum_Odd_Element(arr,n);

    printf("\nThe Sum of Even element : %d\n",sum_even);
    printf("The Sum of Odd element : %d\n",sum_odd);
}

int sum_Even_Element(int arr[],int n)
{
    int even=0;

    printf("Even Elements are : ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
            even+=arr[i];
        }
        
    }
    return even;
}

int sum_Odd_Element(int arr[],int n)
{
    int odd=0;
    printf("\nOdd Elements are : ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
            odd+=arr[i];
        }
        
    }
    return odd;
}