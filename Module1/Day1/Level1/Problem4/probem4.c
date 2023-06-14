/*
Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.
*/

#include<stdio.h>
#include<limits.h>
int operation(int n1,char o,int n2);
int main()
{
    int num1,num2;
    char operator;

    printf("Enter the Number1 : ");
    scanf("%d",&num1);

    getchar();
    printf("Enter the Operator : ");
    scanf("%c",&operator);

    printf("Enter the Number2 : ");
    scanf("%d",&num2);
    
    int result = operation(num1,operator,num2);
    if(result==INT_MIN)
    {
        printf("Please enter a Valid operand(number2) or Operator(+,-,/,* or %%)");
    }
    else
    {
         printf("Your answer is %d",result);
    }
    return 0;
}

int operation(int n1,char o,int n2)
{
    switch(o)
    {
        case '+' : return n1+n2;
        case '-' : return n1-n2;
        case '*' : return n1*n2;
        case '%' : if(n2==0){return INT_MIN;} else return n1%n2;
        case '/' : if(n2==0){return INT_MIN;} else return n1/n2;
        default : return INT_MIN;
    }
}