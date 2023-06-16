/*
Bit Operations:
https://1.bp.blogspot.com/-Tfj_D_f_AF0/VZO5QIIGAUI/AAAAAAAAAmI/5Rw6uIU3EiI/s1600/DS1307%2BTime%2BKeeper%2BRegister.PNG

DS1307 has its time registers in BCD format as shown in the image found in the above link, so 
a. Write a function to Set, clear and toggle bit of an 8-bit number

Concepts to be used.
- Operators
*/

#include <stdio.h>

unsigned char setBit(unsigned char num, unsigned char bitPos) {
    return num | (1 << bitPos);
}

unsigned char clearBit(unsigned char num, unsigned char bitPos) {
    return num & ~(1 << bitPos);
}

unsigned char toggleBit(unsigned char num, unsigned char bitPos) {
    return num ^ (1 << bitPos);
}

int main() {
    unsigned char number = 0b01011010;  
    unsigned char bitPosition = 3;      

    printf("Initial Number: 0x%02X\n", number);

    unsigned char setNumber = setBit(number, bitPosition);
    printf("Set Bit: 0x%02X\n", setNumber);

    unsigned char clearNumber = clearBit(number, bitPosition);
    printf("Clear Bit: 0x%02X\n", clearNumber);

    unsigned char toggleNumber = toggleBit(number, bitPosition);
    printf("Toggle Bit: 0x%02X\n", toggleNumber);

    return 0;
}
