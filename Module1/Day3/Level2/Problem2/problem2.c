/*
BCD to Decimal:
https://1.bp.blogspot.com/-Tfj_D_f_AF0/VZO5QIIGAUI/AAAAAAAAAmI/5Rw6uIU3EiI/s1600/DS1307%2BTime%2BKeeper%2BRegister.PNG

DS1307 has its time registers in BCD format as shown in the image found in the above link,
To set the time we need to convert the decimal number to BCD format,
 hence, write a fucntion to convert decimal to BCD

Concepts to be used.
- Operators
- Preprocessor

*/

#include<stdio.h>
#define DECTOBCD(decimal_value) ((decimal_value/100<<8) | (decimal_value/10<<4) | (decimal_value%10))
void D2B(unsigned int n);
int main()
{
    unsigned int decimal_value;
    printf("Enter the Decimal value : ");
    scanf("%u",&decimal_value);
    unsigned int result = DECTOBCD(decimal_value);
    printf("Decimal to BCD format : %u\n",result);
    D2B(result);


}

void D2B(unsigned int n)
{
    char binary[16]={0};
    int i=0;
    while(n!=0)
    {
        int rem = n%2;
        binary[i++]=rem;
        n=n/2;
    }
    printf("The Decimal to BCD in Binary: ");
    for (int j = 15; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    
}