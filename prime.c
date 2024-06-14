#include <stdio.h>

int main() {
    int num,Prime = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1) Prime = 0;
    for (int i = 2; i <= num / 2 && Prime; i++) {
        if (num % i == 0) Prime = 0;
    }

    printf("%d is %sa prime number.\n", num, Prime ? "" : "not ");
    return 0;
}
