/*
 Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 2 bits from nth bit position, if operation type is 1
    - Clear 3 bits from nth bit position, if operation type is 2
    - Toggle MSB, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type, int pos);
*/

#include<stdio.h>
#include<limits.h>
int bit_operations(int num,int oper_type,int pos);
int main() 
{
    int num, oper_type, pos;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    printf("Enter the position: ");
    scanf("%d", &pos);

    int result = bit_operations(num, oper_type, pos);
    
    if(result == INT_MIN)
    {
        printf("Invalid operation type\n");
    }
    else
    {
         printf("Result: %d\n", result);
    }
   

    return 0;
}

int bit_operations(int num,int oper_type,int pos)
{
    switch(oper_type)
    {
        case 1 : return (num | (3<<pos));
        case 2 : return (num & (~(7<<pos)));
        case 3 : return (num ^ (1<<31));
        default: return INT_MIN;
    }
}

