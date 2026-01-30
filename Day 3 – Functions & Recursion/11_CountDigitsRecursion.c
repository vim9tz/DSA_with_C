// Count Digits of a Number Using Recursion

#include <stdio.h>

int countDigits(int);

int main()
{
    int num = 12345;
    printf("Digits = %d\n", countDigits(num));
    return 0;
}

int countDigits(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}