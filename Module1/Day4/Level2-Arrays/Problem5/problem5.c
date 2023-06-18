/*
Linear Search Algorithm
*/

#include<stdio.h>
int Linear_search(int arr[],int n,int svalue);
int main()
{
    int n;
    printf("Enter the Array Size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the Array Elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int search_value;
    printf("Enter the Search Value : ");
    scanf("%d",&search_value);

    int result = Linear_search(arr,n,search_value);
    if(result == -1)
    {
        printf("The value Not found.");
    }
    else
    {
        printf("The value %d is in Position %d",search_value,result);
    }
}

int Linear_search(int arr[],int n,int svalue)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==svalue)
        {
            return i+1;
        }
    }
    return -1;
}