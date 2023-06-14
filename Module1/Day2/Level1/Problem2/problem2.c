/*
Write a program to swap any type of data passed to an function.
Topics to be covered
- Pointers
- Type Casting
*/

#include<stdio.h>
void after_Swap(void *a, void *b, size_t size);
int main()
{
    printf("1. Integer \n2. Float \n3. double \n4. char\n");
    printf("Enter Your datatype: ");
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1 : 
        {
            int a,b;
            printf("Enter the Befor swap Two data : ");
            scanf("%d %d",&a,&b);
            after_Swap(&a,&b,sizeof(int));
            printf("Ater Swap : %d %d ",a,b);
            break;
        }
        case 2 : 
        {
            float a,b;
            printf("Enter the Befor swap Two data : ");
            scanf("%f %f",&a,&b);
            after_Swap(&a,&b,sizeof(float));
            printf("Ater Swap : %f %f ",a,b);
            break;
        }
        case 3 : 
        {
            double a,b;
            printf("Enter the Befor swap Two data : ");
            scanf("%f %f",&a,&b);
            after_Swap(&a,&b,sizeof(double));
            printf("Ater Swap : %f %f ",a,b);
            break;
        }
        case 4 : 
        {
            char a,b;
            printf("Enter the Befor swap Two data : ");
            scanf(" %c %c",&a,&b);
            after_Swap(&a,&b,sizeof(char));
            printf("Ater Swap : %c %c ",a,b);
            break;
        }
        default:printf("Enter valid datatype");
    }
}
void after_Swap(void *a, void *b, size_t size)
{
    unsigned char *ptr_a = (unsigned char *)a;
    unsigned char *ptr_b = (unsigned char *)b;

    for (size_t i = 0; i < size; i++) {
        unsigned char temp = ptr_a[i];
        ptr_a[i] = ptr_b[i];
        ptr_b[i] = temp;
    }
}