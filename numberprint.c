#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--) {
        for (int j = num; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
