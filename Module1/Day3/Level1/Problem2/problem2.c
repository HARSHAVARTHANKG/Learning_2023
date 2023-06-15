/*
 Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators

*/

#include<stdio.h>
void print_bits(int n);
int main()
{
    int n;
    printf("Enter the 32 bit integer : ");
    scanf("%d",&n);

    print_bits(n);
    return 0;
    
}

void print_bits(int n)
{
    for(int i=31;i>=0;i--)
    {
        int bit = (n>>i)&1;
        printf("%d",bit);
    }
    printf("\n");
}

