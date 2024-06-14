#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = num << 3;

    printf("Result of multiplying %d by 8 is: %d\n", num, result);
    return 0;
}
