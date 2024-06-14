int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0], Min = arr[0], Max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] > min && arr[i] < Min) Min = arr[i];
        if (arr[i] < max && arr[i] > Max) Max = arr[i];
    }

    printf("Min: %d\n", (Min == max) ? -1 : Min);
    printf("Max: %d\n", (Max == min) ? -1 : Max);

    return 0;
}
