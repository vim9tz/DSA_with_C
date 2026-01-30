// Copy String Using Pointer ⭐⭐

#include <stdio.h>

int main()
{
    char src[] = "Pointer";
    char dest[20];
    char *p = src;
    int i = 0;

    while (*p != '\0')
    {
        dest[i++] = *p;
        p++;
    }
    dest[i] = '\0';

    printf("%s\n", dest);

    return 0;
}
