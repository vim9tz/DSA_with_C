// Find String Length Without strlen

#include <stdio.h>

int main() {
    char str[] = "Hello";
    int i = 0;

    while (str[i] != '\0')
        i++;

    printf("Length = %d\n", i);

    return 0;
}