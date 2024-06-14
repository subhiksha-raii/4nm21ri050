#include <stdio.h>

int Numbers(int n) {
    printf("%d\n", n);
    return n < 1000 ? Numbers(n + 1) : 0;
}

int main() {
    Numbers(1);
    return 0;
}
