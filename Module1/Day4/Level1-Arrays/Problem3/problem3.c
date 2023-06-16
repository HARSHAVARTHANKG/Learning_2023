/*
Reverse The Array 64 84 20 36 12 90 72 10 45 56
*/

#include<stdio.h>
void reverse_Array(int arr[],int n);
int main()
{
    int n;
    printf("Enter the Array Size : ");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter the Array Element : ");  
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    printf("Result : \nBefore Reverse : ");    // 64 84 20 36 12 90 72 10 45 56
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    reverse_Array(arr,n);

}

void reverse_Array(int arr[],int n)
{

    printf("\nAfter Reverse  : ");          // 56 45 10 72 90 12 36 20 84 64
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}