#include <stdio.h>
#include <math.h>

int c(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int a(int num) {
    int num_digits = c(num);
    int sum = 0, temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }
    return (sum == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (a(num)) {
        printf("%d is an Armstrong number", num);
    } else {
        printf("%d is not an Armstrong numbe", num);
    }

    return 0;
}
