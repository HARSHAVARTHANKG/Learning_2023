/*
Diff between even & odd indexed elements
64 84 21 36 17 90 77 10 48 55
*/

#include<stdio.h>
int Sum_of_OddIndex(int arr[],int n);
int Sum_of_EvenIndex(int arr[],int n);
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
    int sum_evenIndex = Sum_of_EvenIndex(arr,n);
    int sum_oddIndex = Sum_of_OddIndex(arr,n);

    printf("\nSum of Even Index Element : %d\n",sum_evenIndex);
    printf("Sum of Odd Index Element : %d",sum_oddIndex);
}

int Sum_of_OddIndex(int arr[],int n)
{
    int odd_index =0;

    printf("\nThe Odd Index Elements are : ");
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",arr[i]);
            odd_index+=arr[i];
        }
    }
    return odd_index;
}
int Sum_of_EvenIndex(int arr[],int n)
{
    int even_index =0;
    printf("The Even Index Elements are : ");
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",arr[i]);
            even_index+=arr[i];
        }
    }
    return even_index;
}