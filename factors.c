#include <stdio.h>

int fac(int n, int d) {
    if (d > n) return 0;
    if (n % d== 0) printf("%d ", d);
    return fac(n, d + 1);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    fac(num, 1);
    printf("\n");

    return 0;
}
