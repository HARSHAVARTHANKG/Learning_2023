/*
2. W.A.P to compare the items in a box, assume equal size boxes
Boxes shall have unique items stored in random order
Boxes are compared True if there is one to one mapping of items
return the final result 1 or 0

Example of Equal Boxes:
A[3] = {200, 10, -90}
B[3] = {-90, 200, 10}    

Example of Unequal Boxes:
A[3] = {200, 9, -90}
B[3] = {-90, 200, 10}    

Note: The array should not be sorted

Topics to be covered
- Arrays
- Loops
- Basic Operators
*/

#include<stdio.h>
int check(int arr1[],int arr2[],int n);
int main()
{
    int n;
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];

    printf("Enter the Array1 Element: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the Array2 Element: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }

    int result = check(arr1,arr2,n);
    if(result==1)
    {
        printf("Result : Equal Boxes - 1");
    }
    else
    {
         printf("Result : UnEqual Boxes - 0");
    }
    


}

int check(int arr1[],int arr2[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i]!=arr2[j])
            {
                if(j==n-1)
                {
                    return 0;
                }
            }
            else
            {
                break;
            }
        }
    }
    return 1;
}