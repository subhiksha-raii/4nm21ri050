#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) sum += i;
    }

    printf("%d is %sa perfect number.\n", num, sum == num ? "" : "not ");
    return 0;
}
