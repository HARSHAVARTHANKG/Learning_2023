#include<stdio.h>

int largest_Number(int num);

int main() {
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    int result = largest_Number(num);
    printf("The largest Number by deleting single digit: %d", result);
    return 0;
}

int largest_Number(int num) {
    int pow = 1;
    int largest_value = 0;
    int rem = 0;

    for (int i = 0; i < 4; i++) {
        rem = num / (pow * 10) * pow + num % pow;

        if (rem > largest_value) {
            largest_value = rem;
        }
        pow = pow * 10;
    }

    return largest_value;
}
