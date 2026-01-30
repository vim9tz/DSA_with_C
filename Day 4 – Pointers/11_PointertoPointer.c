// Pointer to Pointer (Basics)

#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("%d\n", **pp);

    return 0;
}