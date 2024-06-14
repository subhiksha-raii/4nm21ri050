#include <stdio.h>

int main() {
    int size;

    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d :\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int diff = arr[1] - arr[0];
    int isAP = 1;  

    for (int i = 2; i < size; i++) {
        if (arr[i] - arr[i - 1] != diff) {
            isAP = 0;  
            break;
        }
    }

    if (isAP) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
