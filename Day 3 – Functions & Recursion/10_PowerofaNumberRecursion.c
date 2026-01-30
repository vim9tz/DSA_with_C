// Find Power of a Number Using Recursion

#include <stdio.h>

int power(int, int);

int main()
{
    int base = 2, exp = 5;
    printf("Result = %d\n", power(base, exp));
    return 0;
}

int power(int b, int e)
{
    if (e == 0)
        return 1;
    return b * power(b, e - 1);
}