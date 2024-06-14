#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};

    gets(str);

    for (int i = 0; str[i]; i++)
        count[(unsigned char)str[i]]++;

    for (int i = 0; str[i]; i++)
        if (count[(unsigned char)str[i]] == 1) {
            printf("non-repeating: %c\n", str[i]);
            return 0;
        }

    printf("No non-repeating.\n");
    return 0;
}
