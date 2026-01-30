// NULL Pointer Safety ⭐

#include <stdio.h>

int main()
{
    int *p = NULL;

    if (p == NULL)
        printf("Pointer is NULL\n");

    return 0;
}