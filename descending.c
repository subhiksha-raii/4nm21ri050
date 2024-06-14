#include <stdio.h>

int main() {
    int num[4], temp;

    printf("Enter four numbers: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0, j; i < 3; i++) {
        j = i + 1;
        while (j < 4) {
            if (num[i] < num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
            j++;
        }
    }

    printf("descending order: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
