/*
Min and Max of 1D Array 

//  64 84 20 36 12 90 72 10 45 56
*/

#include<stdio.h>
int find_Min_Element(int arr[],int n);
int find_Max_Element(int arr[],int n);
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

    int min = find_Min_Element(arr,n);
    int max = find_Max_Element(arr,n);

    printf("The Minumum Element in Array : %d\n",min);
    printf("The Maximum Element in Array : %d",max);
}

int find_Min_Element(int arr[],int n)
{
    int min = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i]; //  64 84 20 36 12 90 72 10 45 56 
        }
    }
    return min;    //----> 10
}

int find_Max_Element(int arr[],int n)
{
    int max = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];  // 64 84 20 36 12 90 72 10 45 56
        }
    }
    return max;   // ----> 90
}