// Modify Array Inside Function

#include <stdio.h>

void modify(int arr[])
{
    arr[0] = 100;
}

int main()
{
    int a[3] = {1, 2, 3};
    modify(a);

    printf("%d\n", a[0]);
    return 0;
}