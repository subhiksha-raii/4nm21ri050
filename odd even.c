#include <stdio.h>

int main() {
    int num, odd = 0, even = 0, multiplier = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            odd = odd + digit * multiplier;
            multiplier *= 10;
        } else {
            even = even * 10 + digit;
        }
        num /= 10;
    }

    printf("Result: %d%d\n", odd, even);

    return 0;
}
