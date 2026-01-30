// Pointer Size vs Variable Size ⭐

#include <stdio.h>

int main()
{
    int *ip;
    char *cp;
    float *fp;

    printf("%lu %lu %lu\n", sizeof(ip), sizeof(cp), sizeof(fp));

    return 0;
}