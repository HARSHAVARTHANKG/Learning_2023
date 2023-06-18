/*

Decimal to Binary  = 29 ----> 11101
Decimal to octal   = 858----> 1532
Decimal to Hexa    = 858----> 35A

*/

#include<stdio.h>
#include<string.h>
void Decimal2Binary(int n);
void Decimal2Octal(int n);
void Decimal2Hexa(int n);
int main()
{
    int choices;
    printf("1. Decimal-To-Binary\n2. Decimal to Octal\n3. Decimal to Hexa\n");
    printf("Enter your Choice : ");
    scanf("%d",&choices);
    int num;
    

    switch(choices)
    {
        case 1 : 
        {
            printf("\nEnter the Decimal Value : ");
            scanf("%d",&num);
            Decimal2Binary(num);
            break;
        }

        case 2 : 
        {
            printf("\nEnter the Decimal Value : ");
            scanf("%d",&num);
            Decimal2Octal(num);
            break;
        }

        case 3 : 
        {
            printf("\nEnter the Decimal Value : ");
            scanf("%d",&num);
            Decimal2Hexa(num);
            break;
        }
        

        default : printf("Enter the Correct Choice!!!");
        break;
    }
}

void Decimal2Binary(int n)
{
    int n1=n;
    char str[8] = {0};
    int i = 0;
    while (n != 0)
    {
        int rem = n % 2;
        str[i] = rem + '0';
        n = n / 2;
        i++;
    }
    
    printf("\nThe Binary Value of %d : ");
    for(int j=7;j>=0;j--)
    {
        if(str[j]==0)
        {
            printf("%c",str[j]+'0');
        }
        else
        {
            printf("%c",str[j]);
        }
    }

}


void Decimal2Octal(int n)
{
    int n1=n;
    char str[8] = {0};
    int i = 0;
    while (n != 0)
    {
        int rem = n % 8;
        str[i] = rem + '0';
        n = n / 8;
        i++;
    }

    printf("\nThe Octal Value of %d : ",n1);
    
    for(int j=strlen(str)-1;j>=0;j--)
    {
        if(str[j]==0)
        {
            printf("%c",str[j]+'0');
        }
        else
        {
            printf("%c",str[j]);
        }
    }
}

void Decimal2Hexa(int n)
{
    int n1=n;
    char str[8] = {0};
    int i = 0;
    while (n != 0)
    {
        int rem = n % 16;
        if(rem==10)
        {
            str[i]='A';
        }
        else if(rem==11)
        {
            str[i]='B';
        }
        else if(rem==12)
        {
            str[i]='c';
        }
        else if(rem==13)
        {
            str[i]='D';
        }
        else if(rem==14)
        {
            str[i]='E';
        }
        else if(rem==15)
        {
            str[i]='F';
        }
        else
        {
            str[i] = rem + '0';
        }
        n = n / 16;
        i++;
    }

    printf("\nThe Hexa Value of %d : ",n1);
    
    for(int j=strlen(str)-1;j>=0;j--)
    {
        if(str[j]==0)
        {
            printf("%c",str[j]+'0');
        }
        else
        {
            printf("%c",str[j]);
        }
    }
}