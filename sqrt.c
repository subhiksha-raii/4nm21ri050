#include <stdio.h>

int main() {
    int num, sqrt = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (sqrt * sqrt <= num) {
        sqrt++;
    }

    if (sqrt * sqrt > num) {
        sqrt--;
    }

    printf("Square root of %d %d\n", num, sqrt);

    return 0;
}
