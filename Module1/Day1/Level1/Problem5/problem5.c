/*
Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 1st bit, if operation type is 1
    - Clear 31st bit, if operation type is 2
    - Toggle 16th bit, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type);
*/

#include<stdio.h>
#include<limits.h>
int bit_operations(int num,int oper_type);
int main()
{
    int num,oper_type;

    printf("Enter the Integer(32 bit) : ");
    scanf("%d",&num);

    printf("Enter the Operation(1,2,3) : ");
    scanf("%d",&oper_type);

    int result = bit_operations(num,oper_type);

    if(result!=INT_MIN)
    {
        printf("The Ouput is %d",result);
    }
    else{
        printf("Please enter the valid operation");
    }
    
    return 0;
}

int bit_operations(int num , int oper_type)
{
    switch(oper_type)
    {
        case 1 : return (num | (1<<0));
        case 2 : return (num & (~(1<<31)));
        case 3 : return (num ^ (1<<15));
        default : return INT_MIN;
    }
}