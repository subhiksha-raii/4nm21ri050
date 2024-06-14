#include <stdio.h>
#include <stdlib.h>
void p(float *balance);

int main() {
    const int cor = 123;
    const int max = 3;
    int enter, attempts;
    float balance = 1000.00;

    for (attempts = 0; attempts < max; attempts++) {
        printf("Enter your PIN: ");
        scanf("%d", &enter);
        if (enter == cor) {
            while (1) {
                p(&balance);
            }
        } else {
            printf("Incorrect PIN. You have %d attempt left.\n", max - attempts - 1);
        }
    }
    printf("Too many incorrect attempts. Exiting.\n");
    return 1;
}

void p(float *balance) {
    int choice;
    float amount;

    printf("\nATM Menu:\n");
    printf("1. Balance \n");
    printf("2. Deposit\n");
    printf("3. Withdrawal\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Your current balance is: %.2f\n", *balance);
            break;
        case 2:
            printf("Enter the amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                *balance += amount;
                printf("Deposit successful. New balance: %.2f\n", *balance);
            } else {
                printf("Invalid amount.\n");
            }
            break;
        case 3:
            printf("Enter the amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= *balance) {
                *balance -= amount;
                printf("Withdrawal successful. New balance:%.2f\n", *balance);
            } else if (amount > *balance) {
                printf("Insufficient funds. Balance:%.2f\n", *balance);
            } else {
                printf("Invalid amount.\n");
            }
            break;
        case 4:
            printf("\n");
            exit(0);
        default:
            printf("Invalid choice\n");
    }
}
