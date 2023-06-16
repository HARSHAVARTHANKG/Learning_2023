/* 
Sum and Average Of 1D Array
*/

#include<stdio.h>
int Sum_of_array(int arr[],int n);
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

    int sum = Sum_of_array(arr,n);
    float avg = sum/n;

    printf("Sum     : %d\n",sum);
    printf("Average : %.2f",avg);
}

int Sum_of_array(int arr[],int n)
{
     int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}