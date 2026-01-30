// Pointer Arithmetic with Array

#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("%d %d %d\n", *p, *(p + 1), *(p + 2));

    return 0;
}