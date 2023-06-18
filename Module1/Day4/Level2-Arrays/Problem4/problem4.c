#include<stdio.h>

void Bubble_sort_asc(int arr[], int n);
void Bubble_sort_desc(int arr[], int n);

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
    
    printf("Sorting\n1. Ascending Order\n2. Descending Order\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            printf("Before Sort: ");
            for(int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            Bubble_sort_asc(arr, n);
            printf("\nAfter Sort (Ascending Order): ");
            for(int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;
        
        case 2:
            printf("Before Sort: ");
            for(int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            Bubble_sort_desc(arr, n);
            printf("\nAfter Sort (Descending Order): ");
            for(int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;
        
        default:
            printf("Enter correct Choice.");
    }
    
    return 0;
}

void Bubble_sort_asc(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Bubble_sort_desc(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
