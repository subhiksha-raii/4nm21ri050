#include <stdio.h>

int main() {
    char str[100],*a,*n;

    gets(str);

    for (a=n=str;*a;a++)
        if (*a != '_')
            *n++=*a;
    *n ='\0';

    printf("%s\n", str);

    return 0;
}
