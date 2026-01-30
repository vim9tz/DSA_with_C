// Sum of Digits Using Recursion

#include <stdio.h>

int sumOfDigits(int);

int main()
{
    int num = 123;
    printf("Sum = %d\n", sumOfDigits(num));
    return 0;
}

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}