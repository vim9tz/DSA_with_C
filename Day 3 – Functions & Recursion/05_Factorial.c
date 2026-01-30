// Factorial Using Function (Iterative)

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
    int fact = 1, i;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}