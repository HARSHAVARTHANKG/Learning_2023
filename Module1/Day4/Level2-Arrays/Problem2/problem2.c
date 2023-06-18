/*
Binary , octal, hexadecimal to Binary
*/

#include <stdio.h>
#include <math.h>
#include<string.h>

int binaryToDecimal(long long binaryNumber)
{
    int decimalNumber = 0;
    int base = 1;

    while (binaryNumber > 0)
    {
        int digit = binaryNumber % 10;
        decimalNumber += digit * base;
        binaryNumber /= 10;
        base *= 2;
    }

    return decimalNumber;
}

int octalToDecimal(int octalNumber)
{
   int decimalNumber = 0;
    int base = 1;

    while (octalNumber > 0)
    {
        int digit = octalNumber % 10;
        decimalNumber += digit * base;
        octalNumber /= 10;
        base *= 8;
    }

    return decimalNumber;
}

int hexToDecimal(char hexNumber[])
{
    int decimalNumber = 0;
    int base = 1;
    int length = strlen(hexNumber);

    for (int i = length - 1; i >= 0; i--)
    {
        if (hexNumber[i] >= '0' && hexNumber[i] <= '9')
        {
            decimalNumber += (hexNumber[i] - '0') * base;
            base *= 16;
        }
        else if (hexNumber[i] >= 'A' && hexNumber[i] <= 'F')
        {
            decimalNumber += (hexNumber[i] - 'A' + 10) * base;
            base *= 16;
        }
        else if (hexNumber[i] >= 'a' && hexNumber[i] <= 'f')
        {
            decimalNumber += (hexNumber[i] - 'a' + 10) * base;
            base *= 16;
        }
    }

    return decimalNumber;
}

int main()
{
    long long binaryNumber;
    int octalNumber;
    char hexNumber[20];

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    printf("Decimal equivalent: %d\n", binaryToDecimal(binaryNumber));

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("Decimal equivalent: %d\n", octalToDecimal(octalNumber));

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexNumber);

    printf("Decimal equivalent: %d\n", hexToDecimal(hexNumber));

    return 0;
}
