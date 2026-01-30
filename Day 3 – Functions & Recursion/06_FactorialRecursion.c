// Factorial Using Recursion

#include <stdio.h>

int factorial(int);

int main()
{
    int n = 5;
    printf("Factorial = %d\n", factorial(n));
    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}