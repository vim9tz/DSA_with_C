// Swap Two Numbers(Call by Value)

#include <stdio.h>

void swap(int, int);

int main()
{
    int a = 10, b = 20;

    swap(a, b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}