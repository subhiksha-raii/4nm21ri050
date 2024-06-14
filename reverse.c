#include <stdio.h>

int main() {
    char name[20];
    int i = 0;
    gets(name);
    while (name[i] != '\0')
        i++;
    while (i>0)
        putchar(name[--i]);
    return 0;
}
