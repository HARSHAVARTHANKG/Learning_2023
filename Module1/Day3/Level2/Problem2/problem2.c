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
int BinaryToDecimal(unsigned int b_value);
int main()
{
    unsigned int b_value;
    printf("Enter the Binary Value : ");
    scanf("%u",&b_value);

    int result = BinaryToDecimal(b_value);



    return 0;
}

int BinaryToDecimal(unsigned int b_value)
{
    int pow = 2;
    int sum = 0;

    for(int i=0;i)
}
