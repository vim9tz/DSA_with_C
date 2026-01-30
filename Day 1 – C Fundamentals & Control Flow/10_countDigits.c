// Count Digits of a Number

#include <stdio.h>

int main()
{
    int num = 12345, count = 0;

    while (num != 0)
    {
        num = num / 10;
        count++;
    }

    printf("Number of digits = %d\n", count);

    return 0;
}