// Simple Function to Add Two Numbers

#include <stdio.h>

// Function Prototype
int add(int, int);

int main()
{
    int a = 10, b = 20;
    int result;

    result = add(a, b);

    printf("Sum = %d\n", result);

    return 0;
}

// Function Definition
int add(int x, int y)
{
    return x + y;
}