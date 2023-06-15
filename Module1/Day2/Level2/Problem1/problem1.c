/*
1. Write a program to swap every alternate element of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be a[5] = {30, 20, 10, 40, 50}
one more example a[5] = {10, 20, 30, 40, 50, 60}, the result should be a[5] = {30, 20, 10, 60, 50, 40}

Topics to be covered
- Arrays
- Loops
- Basic Operators
*/

 #include<stdio.h>
 void swap_alternate(int arr[],int n);
 void swap(int *a,int *b);
 int main()
 {
    int n;
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Before Swap : ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }

    swap_alternate(arr,n);

    printf("\nAfter Swap : ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }

 }

 void swap_alternate(int arr[],int n)
 {
    for(int i=0,j=i+2;i<n;i+=3,j=i+2)
    {
        if(i<n && j<n)
        {
            swap(&arr[i],&arr[j]);
        }
    }
 }

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}